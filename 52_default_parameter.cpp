// default parameter set in function
#include <iostream>
using namespace std;
void add(int a = 5, int b = 10)
{
    cout << "a + b = " << (a + b) << endl;
}

void bill(int quantity, int price = 100)
{
    cout << "total bill : " << quantity * price << endl;
}

int main()
{
    add(12);
    add(5, 9);
    add();
    bill(5, 500);
    bill(10, 45);
    bill(4);
    return 0;
}