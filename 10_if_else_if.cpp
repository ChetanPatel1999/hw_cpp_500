// if else if example
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num > 0)
    {
        cout << " num is positive";
    }
    else if (num < 0)
    {
        cout << " num is nagative";
    }
    else
    {
        cout << "num is zero";
    }
    return 0;
}