#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp() {}
    emp(int a, float b)
    {
        id = a;
        sal = b;
    }
    emp(emp &obj) // copy constructor
    {
        cout << "copy constructor is called" << endl;
        id = obj.id + 1;
        sal = obj.sal + 1000;
    }
    void get_emp()
    {
        cout << "emp info----- " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
int main()
{
    emp e1(101, 15000), e2(e1), e4; // our copy constructor
    emp e3 = e2;                    // our copy constructor
    e4 = e1;                        // default copy constructor
    e1.get_emp();
    e2.get_emp();
    e3.get_emp();
    e4.get_emp();

    return 0;
}