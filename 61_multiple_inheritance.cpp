#include <iostream>
using namespace std;
class addition
{
public:
    void add(int a, int b)
    {
        cout << " sum = " << (a + b) << endl;
    }
};
class subtraction
{
public:
    void sub(int a, int b)
    {
        cout << " sub = " << (a - b) << endl;
    }
};
class multiplication
{
public:
    void mul(int a, int b)
    {
        cout << " mul = " << (a * b) << endl;
    }
};
class calculator : public addition, public subtraction, public multiplication
{
public:
    void alloperatio(int a, int b)
    {
        add(a, b);
        sub(a, b);
        mul(a, b);
    }
};
int main()
{
    calculator a1;
    a1.alloperatio(12, 6);
    a1.add(9, 67);
    a1.mul(3, 5);
    return 0;
}