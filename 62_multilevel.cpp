#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    void set_roll(int a)
    {
        rno = a;
    }
    void display_roll()
    {
        cout << "student rno : " << rno << endl;
    }
};
class marks : public student
{
public:
    int hindi;
    int english;

public:
    void set_marks(int a, int b)
    {
        hindi = a;
        english = b;
    }
    void disp_marks()
    {
        cout << "student marks ..." << endl;
        cout << "hindi : " << hindi << endl;
        cout << "english : " << english << endl;
    }
};
class result : public marks
{
    float per;

public:
    void gen_result()
    {
        per = (hindi + english) / 2.0;
        cout << "percantage : " << per << endl;
    }
};
int main()
{
    result s1;
    s1.set_roll(101);
    s1.set_marks(45, 80);
    s1.display_roll();
    s1.disp_marks();
    s1.gen_result();
    return 0;
}