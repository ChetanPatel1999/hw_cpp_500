// example of constructor
#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "this is 0 arg constructor is called" << endl;
    }
    demo(int a)
    {
        cout << "this is 1 arg constructor is called" << endl;
    }
    demo(int a, int b)
    {
        cout << "this is 2 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display " << endl;
    }
};
int main()
{
    demo d1(56), d2, d3(56, 4);
    d1.display();
    return 0;
}