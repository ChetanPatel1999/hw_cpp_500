#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5];
    int i;
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }
    printf("display array element : ");
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    delete ptr;
    return 0;
}