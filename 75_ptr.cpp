#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr=100;
    cout << a << endl;
    cout << *ptr << endl;
    ptr++;
    cout << ptr << endl;
    return 0;
}