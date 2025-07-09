#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i, *ptr;
    ptr = arr;
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        cin >> (*ptr);
        ptr++;
    }
    ptr = arr;
    printf("display array element : ");
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout << "\narray element sum = " << sum << endl;
    return 0;
}