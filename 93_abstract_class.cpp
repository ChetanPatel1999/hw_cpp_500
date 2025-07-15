#include <iostream>
using namespace std;
class base // base is become abstract class
{
protected:
    int num1, num2;

public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    virtual void display() = 0; // pure virtual function
};

class derived : public base
{
public:
    void display()// override pure virtual function of base class
    {
        cout << "value of num1 : " << num1 << endl;
        cout << "value of num1 : " << num2 << endl;
    }
};
int main()
{
    derived obj;
    obj.setdata(34, 56);
    obj.display();
    return 0;
}