#include <iostream>
using namespace std;
class emp
{
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
    emp *ptr = new emp[3], *temp;
    temp = ptr;
    int i, id;
    float sal;
    for (i = 0; i < 3; i++)
    {
        cout << "enter id : ";
        cin >> id;
        cout << "enter sal : ";
        cin >> sal;
        ptr->set_emp(id, sal);
        ptr++;
    }
    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        ptr->get_emp();
        ptr++;
    }
    ptr = temp;
    delete ptr;
    return 0;
}