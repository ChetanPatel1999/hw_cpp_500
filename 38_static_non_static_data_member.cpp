#include <iostream>
using namespace std;
class demo
{
    int a;        // non static/instance variable
    int b;        // non static/instance variable
    static int c; // static/class variable
    static int d; // static/class variable
public:
    void setdata(int x, int y, int r, int s)
    {
        a = x;
        b = y;
        c = r;
        d = s;
    }
    void display()
    {
        cout << " a , b = " << a << " , " << b << "  c , d = " << c << " , " << d << endl;
    }
};
int demo::c;   
int demo::d;
int main()
{
    demo d1, d2, d3;
    d1.setdata(12, 13, 100, 200);
    d2.setdata(14, 15, 300, 400);
    d3.setdata(16, 17, 500, 600);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}