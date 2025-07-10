#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a, float b)
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
    emp *ptr = new emp(101, 1200);
    ptr->get_emp();
    delete ptr;
    return 0;
}