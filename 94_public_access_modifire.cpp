#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    void setdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "a = " << a << endl;
    }
};
class child : public demo
{
public:
    void display()
    {
        cout << "a = " << a << endl;
    }
};
class other
{
public:
    void fun()
    {
        demo d1;
        d1.a = 56;
        cout << "a = " << d1.a << endl;
    }
};
int main()
{
    demo d1;
    child d2;
    d1.a = 12;
    cout << "a = " << d1.a << endl;
    d2.setdata(123);
    d2.display();
    other o1;
    o1.fun();
    return 0;
}