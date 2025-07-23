#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    int i;
    for (i = 0; i < s1.length(); i++)
    {
        cout << s1.at(i) << endl;
    }
    return 0;
}