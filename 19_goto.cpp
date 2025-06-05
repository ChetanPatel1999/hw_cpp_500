// goto example
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
lab:
    cout << i << endl;
    i++;
    if (i <= 10)
    {
        goto lab;
    }
    return 0;
}