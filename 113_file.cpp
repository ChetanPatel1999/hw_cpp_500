#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // open a file using constructor
    ofstream write("facto.txt", std::_S_app);
    int fact = 1, n, i;
    cout << "enter a num : ";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        fact = fact * i;
    }
    write << "factorial of " << n << " = " << fact << endl;
    write.close();
    return 0;
}