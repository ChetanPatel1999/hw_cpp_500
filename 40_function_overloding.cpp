#include <iostream>
using namespace std;
void add()
{
    int a = 12, b = 5;
    int c = a + b;
    cout << " sum = " << c << endl;
}
void add(int a)
{
    cout << "int fun call" << endl;
    int b = 5;
    int c = a + b;
    cout << " sum = " << c << endl;
}
void add(char a)
{
    cout << "char fun is call" << endl;
    int b = 5;
    int c = a + b;
    cout << " sum = " << c << endl;
}
void add(int a, int b)
{
     cout << " int int" << endl;
    int c = a + b;
    cout << " sum = " << c << endl;
}
void add(int a, double b)
{
    cout << " int double" << endl;
    int c = a + b;
    cout << " sum = " << c << endl;
}
void add(double a, int b)
{
    cout << " double int" << endl;
    int c = a + b;
    cout << " sum = " << c << endl;
}
int main()
{
    add(5.78, 20);
    return 0;
}