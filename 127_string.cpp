#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan patel";
    string s2;
    char ch[10];
    // copy s1 charcter in ch
    s1.copy(ch, 4, 3);
    cout << ch;
    return 0;
}