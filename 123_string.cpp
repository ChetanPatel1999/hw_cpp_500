#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    cout << s1.length() << endl;
    cout << s1 << endl;
    s1.resize(3); // its used to resize string
    cout << s1.length() << endl;
    cout << s1 << endl;
    s1.resize(10);
    cout << s1.length() << endl;
    cout << s1 << endl;
    return 0;
}