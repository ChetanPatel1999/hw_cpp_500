#include <iostream>
using namespace std;
int c=0;
class emp
{
    int id;
    float sal;
    int count;
public:
    void set_emp()
    {
        cout << "enter emp"<<++c<<" info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sal : ";
        cin >> sal;
    }
    void get_emp()
    {
        cout << "emp"<<++c<<" info----- " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
        cout << "---------------------"<< endl;
    }
};
int main()
{
    emp e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        e[i].set_emp();
    }
    cout<<"\n\n";
    c=0;
    for (i = 0; i < 3; i++)
    {
        e[i].get_emp();
    }

    return 0;
}