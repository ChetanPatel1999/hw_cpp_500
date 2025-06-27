#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor
    {
        cout << "constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display " << endl;
    }
    ~demo() //destructor
    {
        cout << "destructor is called" << endl;
    }
};
int main()
{
    demo d1, d2;
    cout << "inside main function" << endl;
    d1.display();
    {
        demo d3;
        d3.display();
    }
    cout << "after d3 object" << endl;
    return 0;
}