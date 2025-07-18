// template function
#include <iostream>
using namespace std;
template <class t>
void display(t a)
{
    cout << "data = " << a << endl;
}

template <class t1, class t2>
float average(t1 a, t2 b)
{
    return (a + b) / 2.0;
}

template <class t>
t add(t a, t b)
{
    return (a + b);
}

int add(int a, int b)
{
    cout<<"hello brother";
    return (a + b);
}

int main()
{
    display(12);
    display(12.78);
    display('A');
    display("hello");
    cout << "average : " << average(12.2, 11) << endl;
    cout << add(12, 3);
    cout << add(12.5, 3.1);
    return 0;
}