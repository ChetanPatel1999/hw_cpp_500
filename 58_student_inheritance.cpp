#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void setStudent(string s1, int a, float b)
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
    void setMarks(int a, int b, int c)
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
    void setMarks(int a, int b, int c)
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
    mathstd s1;
    s1.setStudent("ram", 101, 90);
    s1.setMarks(95, 90, 85);
    s1.displayStudent();
    s1.displayMarks();
    cout << "--------------------------" << endl;
    comstd s2;
    s2.setStudent("shyam", 102, 60);
    s2.setMarks(50, 70, 60);
    s2.displayStudent();
    s2.displayMarks();
    return 0;
}