#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    friend void display(data);
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void display(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
    cout << "num2 = " << obj.num2 << endl;
}
int main()
{
    data d1;
    d1.setdata(12, 56);
    display(d1);
    return 0;
}