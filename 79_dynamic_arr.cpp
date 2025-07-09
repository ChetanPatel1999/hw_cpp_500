#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5];
    int *temp = ptr;
    int i;
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        cin >> (*ptr);
        ptr++;
    }
    ptr = temp;
    printf("display array element : ");
    for (i = 0; i < 5; i++)
    {
        cout << (*ptr) << " ";
        ptr++;
    }
    ptr = temp;
    delete ptr;
    return 0;
}