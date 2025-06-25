#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

    a = 67;

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

    b = 100;

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    return 0;
}