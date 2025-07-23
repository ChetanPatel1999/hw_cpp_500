#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    cout << s1 << endl;
    //  s1.pop_back(); // its remove last character
    s1.push_back('p');
    cout << s1 << endl;
    s1.clear(); // its used to empty string
    cout << s1 << endl;
    s1.push_back('K');
    cout << s1 << endl;
    s1.append("hello");
    cout << s1 << endl;
    return 0;
}