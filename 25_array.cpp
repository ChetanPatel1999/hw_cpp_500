#include <iostream>
using namespace std;
int main()
{
    string name[5] = {"ram", "shyam", "anirudh", "raj", "sahaj"};
    int marks[5] = {10, 90, 12, 700, 95}, i;
    string s;
    int f = 0;
    cout << "enter name : ";
    cin >> s;
    for (i = 0; i < 5; i++)
    {
        if (name[i] == s)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << s << " is found in student list" << endl;
    }
    else
    {
        cout << s << " is not found in student list" << endl;
    }
    int max = marks[0], index = 0;
    for (i = 0; i < 5; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
            index = i;
        }
    }
    cout << "student name : " << name[index] << endl;
    cout << "max marks : " << max << endl;
    return 0;
}