// boolean data type
#include <iostream>
using namespace std;
int main()
{
    bool isPass;
    cout << "size of boolean : " << sizeof(isPass) << endl;
    isPass = true;
    cout << "isPass : " << isPass << endl;
    isPass = false;
    cout << "isPass : " << isPass << endl;
    isPass = 45;
    cout << "isPass : " << isPass << endl;
    return 0;
}