#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "base display" << endl;
    }
};
class derived : public base
{
public:
    void display() // method override
    {
        cout << "derived display" << endl;
    }
};
int main()
{
    derived d1;
    d1.display();
    return 0;
}