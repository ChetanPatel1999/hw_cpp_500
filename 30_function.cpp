#include <iostream>
using namespace std;
bool prime(int num) // 17
{
    int i;
    for (i = 2; i < num; i++) // 7
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    if (prime(7))
    {
        cout << "num is prime";
    }
    else
    {
        cout << "num is not prime";
    }
    return 0;
}