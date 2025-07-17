#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void set_emp(int id, float sallary)
    {
        this->id = id;
        (*this).sallary = sallary;
    }
    void get_emp()
    {
        cout << "emp info----- " << endl;
        cout << "emp id : " << this->id << endl;
        cout << "emp sal : " << this->sallary << endl;
    }
};
int main()
{
    emp e1, e2, e3;
    e1.set_emp(101, 12000);
    e2.set_emp(102, 50000);
    e1.get_emp();
    e2.get_emp();
    return 0;
}