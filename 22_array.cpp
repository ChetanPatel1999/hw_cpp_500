/// array in cpp
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    for (i = 0; i < 5; i++) // 1
    {
        cout << arr[i] << endl;
    }
    int sum = 0;
    // 12, 34, 56, 78, 90
    for (i = 0; i < 500; i++)
    {
        sum = sum + arr[i]; // 270
    }
    cout << "sum of array element : " << sum << endl;
    return 0;
}   
