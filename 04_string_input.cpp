#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "enter name :";
    // cin >> name;
    getline(cin, name);
    cout << "name : " << name << endl;
    return 0;
}