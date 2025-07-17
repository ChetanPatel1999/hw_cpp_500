//"this" is a keyword which internal pointer provide
// by cpp language and its point to current
// calling object.
#include <iostream>
using namespace std;
class demo
{
    int num1;

public:
    demo(int num1)
    {
        this->num1 = num1;
    }
    void display()
    {
        int num1 = 90;
        cout << "num1= " << num1 << endl;
        cout << "num1= " << this->num1 << endl;
    }
};
int main()
{
    demo d1(45);
    d1.display();
    return 0;
}