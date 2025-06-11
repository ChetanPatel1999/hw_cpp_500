#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void set_emp()
    {
        cout << "enter emp info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sal : ";
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
    emp e1, e2, e3;
    e1.set_emp();
    e2.set_emp();
    e1.get_emp();
    e2.get_emp();
    return 0;
}