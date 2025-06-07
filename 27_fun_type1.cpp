#include <iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout << "enter two number : ";
    cin >> a >> b;
    c = a + b;
    cout << "sum = " << c;
}
void voter_eligibility_check()
{
    int age;
    cout << "enter you age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "you can not vote";
    }
}
int main()
{
    voter_eligibility_check();
    return 0;
}