#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    //replece(pos,no_of_char,new_string);
    s1.replace(2, 2, "ram");
    cout << s1;
    return 0;
}