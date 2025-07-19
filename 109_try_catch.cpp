#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    printf("enter a value : ");
    scanf("%d", &a);
    printf("enter b value : ");
    scanf("%d", &b);
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        printf("division = %d\n", c);
    }
    catch (int b)
    {
        printf("zero division error\n");
    }

    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num > 0)
    {
        cout << "num is positive";
    }
    else if (num < 0)
    {
        cout << "num is nagative";
    }
    else
    {
        cout << "num is zero";
    }
    return 0;
}