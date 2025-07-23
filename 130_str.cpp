#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    // its find given char position in string
    //  if char is not found so its return grbage value
    cout << s1.find('e') << endl;

    // its used to fetch substring from string
    string s2 = s1.substr(2, 3);
    cout << s2 << endl;

    s1.clear();
    string s4 = "jo";
    // its return 1 if string is empty other wise 0
    cout << s4.empty() << endl;
    cout << s1.empty() << endl;
    return 0;
}