// member function defination outside class
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void set_emp(int a, float b);
    void get_emp();
};
void emp::set_emp(int a, float b) // setter methode
{
    id = a;
    sal = b;
}
void emp::get_emp() // getter method
{
    cout << "emp info----- " << endl;
    cout << "emp id : " << id << endl;
    cout << "emp sal : " << sal << endl;
}
int main()
{
    emp e1, e2, e3;
    e1.set_emp(101, 12000);
    e2.set_emp(102, 50000);
    e1.get_emp();
    e2.get_emp();
    return 0;
}