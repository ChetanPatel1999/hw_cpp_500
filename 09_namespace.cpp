#include <iostream>
int main()
{
    int num1, num2, sum;
    std::cout << "enter a num1 : ";// (::) scop resolution operator
    std::cin >> num1;
    std::cout << "enter a num2 : ";
    std::cin >> num2;
    sum = num1 + num2;
    std::cout << "sum of " << num1 << " and " << num2 << " = " << sum << std::endl;
    return 0;
}