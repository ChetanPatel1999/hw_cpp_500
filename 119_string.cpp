#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    string s2 = "patel";
    string s3;
    s3 = s1 + " " + s2;
    s1.append(s2); // using appen we can append one string in another string
    cout << s3 << endl;
    cout << s1 << endl;
    return 0;
}