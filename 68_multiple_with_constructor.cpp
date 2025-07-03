#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "base1 0 arge" << endl;
    }
    base1(int a)
    {
        cout << "base1 1 arge" << endl;
    }
};
class base2
{
public:
    base2()
    {
        cout << "base2 0 arge" << endl;
    }
    base2(int a)
    {
        cout << "base2 1 arge" << endl;
    }
};
class D : public base2, public base1
{
public:
    D():base1(78),base2(67)
    {
        cout << "D 0 arge" << endl;
    }
    D(int a)
    {
        cout << "D 1 arge" << endl;
    }
};
int main()
{
    D d1;
    return 0;
}