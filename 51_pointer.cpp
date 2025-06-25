#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 12, y = 5;
    cout << "value of x= " << x << endl; // 12
    cout << "value of y= " << y << endl; // 5

    swap(&x, &y);

    printf("after swapping : -\n");
    cout << "value of x= " << x << endl;
    cout << "value of y= " << y << endl;

    return 0;
}