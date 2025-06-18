// how to pass object in method
#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "data display : " << endl;
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "------------------------" << endl;
    }
    void add(data obj)
    {
        int sum1, sum2;
        sum1 = num1 + obj.num1;
        sum2 = num2 + obj.num2;
        cout << "num1 sum = " << sum1 << endl;
        cout << "num2 sum = " << sum2 << endl;
    }
    static void add(data o1, data o2)
    {
        int sum1, sum2;
        sum1 = o1.num1 + o2.num1;
        sum2 = o1.num2 + o2.num2;
        cout << "num1 sum = " << sum1 << endl;
        cout << "num2 sum = " << sum2 << endl;
    }
};
int main()
{
    data d1, d2;
    d1.setData(12, 5);
    d2.setData(4, 9);
    d1.display();
    d2.display();
    d1.add(d2);
    data::add(d1, d2);
    return 0;
}