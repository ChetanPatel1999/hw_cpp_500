#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp()
    {
        cout << "enter id : ";
        cin >> id;
        cout << "enter sal : ";
        cin >> sal;
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
    int i;
    for (i = 0; i < 3; i++)
    {
        ptr->get_emp();
        ptr++;
    }
    ptr = temp;
    delete ptr;
    return 0;
}