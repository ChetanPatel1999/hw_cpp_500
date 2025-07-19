#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    printf("start programm...\n");
    try
    {
        printf("inside try ...\n");
        if (a < 0)
        {
            throw a;
        }
        printf("value of a = %d \n", a);
    }
    catch (int c)
    {
        printf("nagative value error.. \n");
        printf("value = %d\n", c);
    }
    printf("after try catch block");
    return 0;
}