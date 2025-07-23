//s1.length() :- its return length of string.
#include <iostream>
using namespace std;
int main()
{
    string s1("home ram");
    cout << s1.length() << endl;
    cout << s1[0] << endl;
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        cout << s1[i] << endl;
    }
    return 0;
}