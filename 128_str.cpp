#include <iostream>
using namespace std;
int main()
{
    string s1 = "kello", s2 = "hello";
    if (s1.compare(s2) == 0) // (s1 == s2)
    {
        cout << "string are same";
    }
    else
    {
        cout << "string are different";
    }
    return 0;
}