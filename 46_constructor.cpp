#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a, float b) // constructor
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
    emp e1(101,12000), e2(102,50000);
    e1.get_emp();
    e2.get_emp();
    return 0;
}