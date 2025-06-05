// for loop example
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter num : ";
    cin >> n;//5
    for (i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}