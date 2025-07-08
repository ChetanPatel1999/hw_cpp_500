// member friend function
#include <iostream>
using namespace std;
class data;
class other
{
public:
    void disp1(data);
    void disp2(data);
};
class data
{
    int num1;
    int num2;

public:
    friend void other::disp1(data);
    friend void other::disp2(data);
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void other::disp1(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
}
void other::disp2(data obj)
{
    cout << "num2 = " << obj.num2 << endl;
}
int main()
{
    data d1;
    d1.setdata(12, 34);
    other o1;
    o1.disp1(d1);
    o1.disp2(d1);
    return 0;
}