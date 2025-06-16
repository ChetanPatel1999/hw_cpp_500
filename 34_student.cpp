#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void set_student(string s1, int a, float b)
    {
        name = s1;
        rno = a;
        per = b;
    }
    void print_report_card()
    {
        cout << "Student Report Card----" << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per > 33)
        {
            cout << "student : pass" << endl;
        }
        else
        {
            cout << "student : fail" << endl;
        }
        cout << "-----------------------------------" << endl;
    }
};
int main()
{
    student s1, s2, s3, s4;  // s1,s2,s3,s4 are instance of student
    s1.set_student("anirudh", 101, 90);
    s2.set_student("raj", 102, 20);
    s3.set_student("sahaj", 103, 50);
    s4.set_student("aziz", 104, 30);
    s1.print_report_card();
    s2.print_report_card();
    s3.print_report_card();
    s4.print_report_card();
    return 0;
}