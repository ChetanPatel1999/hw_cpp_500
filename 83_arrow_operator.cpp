// arrow operator   (->)
//using arrow operator we can access object data member or metheds
//through pointer which object address point by pointer.
#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    float sal;

public:
    void set_emp(int a, float b)
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
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->set_emp(101, 12000);
    ptr->get_emp();
    cout << (ptr->id) << endl;
    cout << (ptr->sal) << endl;
    return 0;
}