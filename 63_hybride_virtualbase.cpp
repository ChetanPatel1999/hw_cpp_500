// what is dimond problem
//  how to solve dimond problem
//  what is virtual base class
//  what is hybride inheritance
#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "base class display" << endl;
    }
};
class d1 : public virtual base
{
};
class d2 : public virtual base
{
};
class derived : public d1, public d2
{
};
int main()
{
    derived d1;
    d1.display();
    return 0;
}