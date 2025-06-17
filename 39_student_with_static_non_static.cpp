// static and non static
#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int total_fail;
    static int total_pass;
    static int total_std;
    static string class_teacher;

public:
    void set_student(string s1, int a, float b)
    {
        name = s1;
        rno = a;
        per = b;
        total_std++;
    }
    void print_report_card()
    {
        cout << "Student Report Card----" << endl;
        cout << "class teacher name :" << class_teacher << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per > 33)
        {
            cout << "student : pass" << endl;
            total_pass++;
        }
        else
        {
            cout << "student : fail" << endl;
            total_fail++;
        }
        cout << "-----------------------------------" << endl;
    }
    static void total_result()
    {
        cout << "total result : " << endl;
        cout << "total pass : " << total_pass << endl;
        cout << "total fail : " << total_fail << endl;
        cout << "-----------------------------------" << endl;
    }
    static void display_total_std()
    {
        cout << "total student in class : " << total_std << endl;
        cout << "-----------------------------------" << endl;
    }
    static void discribe_class()
    {
        cout << " this class have 5 methods" << endl;
        cout << " set_student method set data" << endl;
    }
    static void add(int a, int b)
    {
        cout << "sum = " << (a + b) << endl;
    }
};
int student::total_fail = 0; // 2
int student::total_pass = 0; // 2
int student::total_std = 0;
string student::class_teacher = "menaa sharma";
int main()
{
    student::discribe_class();
    student s1, s2, s3, s4;
    s1.set_student("anirudh", 101, 90);
    s2.set_student("raj", 102, 70);
    s3.set_student("sahaj", 103, 50);
    s4.set_student("aziz", 104, 30);
    student::display_total_std();
    s1.print_report_card();
    s2.print_report_card();
    s3.print_report_card();
    s4.print_report_card();
    student::total_result();
    student::add(34, 6);
    return 0;
}