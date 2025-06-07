#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
float avrage(int a, int b)
{
    return (a + b) / 2.0;
}
char uppercase(char ch)
{
    return (ch - 32);
}
string full_name(string name, string sir_name)
{
    return (name + " " + sir_name);
}
int main()
{
    cout << "full name : " << full_name("chetan", "patel");
    // cout << "uppercase : " << uppercase('a') << endl;

    // int res = add(12, 7);
    // cout << "sum = " << res << endl;
    // cout << "sum = " << add(3, 8) << endl;
    // cout << "avrage = " << avrage(3, 8) << endl;
    return 0;
}