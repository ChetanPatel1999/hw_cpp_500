// example of hirarichal inheritance
#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    student(string s1, int a, float b)
    {
        name = s1;
        rno = a;
        per = b;
    }
    void displayStudent()
    {
        cout << "student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
    }
};
class mathstd : public student
{
    int math;
    int physics;
    int chemestry;

public:
    mathstd(string x, int y, float z, int a, int b, int c) : student(x, y, z)
    {
        math = a;
        physics = b;
        chemestry = c;
    }
    void displayMarks()
    {
        cout << "student marks..." << endl;
        cout << "math : " << math << endl;
        cout << "physics : " << physics << endl;
        cout << "chemestry : " << chemestry << endl;
    }
};

class comstd : public student
{
    int ip;
    int business;
    int account;

public:
    comstd(string x, int y, float z, int a, int b, int c) : student(x, y, z)
    {
        ip = a;
        business = b;
        account = c;
    }
    void displayMarks()
    {
        cout << "student marks..." << endl;
        cout << "ip : " << ip << endl;
        cout << "business : " << business << endl;
        cout << "account : " << account << endl;
    }
};

int main()
{
    mathstd s1("ram", 101, 90, 95, 90, 85);
    s1.displayStudent();
    s1.displayMarks();
    cout << "--------------------------" << endl;
    comstd s2("shyam", 102, 60, 50, 70, 60);
    s2.displayStudent();
    s2.displayMarks();
    return 0;
}