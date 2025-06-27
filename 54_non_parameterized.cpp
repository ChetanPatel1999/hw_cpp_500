#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp() // non -parameterized constructor
    {
        id = 103;
        sal = 1000;
    }
    emp(int a, float b) // parameterized constructor
    {
        id = a;
        sal = b;
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
    emp e1(101, 1500), e2, e3;
    e1.get_emp();
    e2.get_emp();
    e3.get_emp();
    return 0;
}