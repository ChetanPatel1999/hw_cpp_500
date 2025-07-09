#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i,*ptr;
    ptr=arr;
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}