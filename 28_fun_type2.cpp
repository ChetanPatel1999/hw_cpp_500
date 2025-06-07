#include <iostream>
using namespace std;
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "sum = " << c << endl;
}
void cube(int num)
{
    cout << "cube = " << (num * num * num) << endl;
}
int main()
{
    add(12, 8);
    cube(3);
    return 0;
}