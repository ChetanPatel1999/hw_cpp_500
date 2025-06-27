#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a = 103, float b = 1000) // default constructor
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
    emp e1(101), e2(102, 1500), e3;
    e1.get_emp();
    e2.get_emp();
    e3.get_emp();
    return 0;
}