#include <iostream>
using namespace std;
class demo
{
public:
    int a;

private:
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
class child : public demo
{
public:
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl; // private data member
    }
};
class other
{
public:
    void fun()
    {
        demo d1;
        d1.a = 56;
        d1.b = 456; // private data member
        cout << "a = " << d1.a << endl;
        d1.display();
    }
};
int main()
{
    demo d1;
    child d2;
    d1.a = 12;
    d1.b = 89; // private data member
    cout << "a = " << d1.a << endl;
    d2.setdata(123, 90);
    d2.display();
    other o1;
    o1.fun();
    return 0;
}