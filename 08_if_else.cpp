// wap to check voter is eligible for voting or not.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "yon can not vote";
    }
    return 0;
}