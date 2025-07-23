#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello", s2 = "ram";
    s1.swap(s2);
    // string s3;
    // s3 = s1;
    // s1 = s2;
    // s2 = s3;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    return 0;
}