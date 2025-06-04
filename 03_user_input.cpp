// variable example in cpp
#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    char gender;
    cout << "enter your name : ";
    cin >> name;
    cout << "enter your age : ";
    cin >> age;
    cout << "enter your height : ";
    cin >> height;
    cout << "enter your gender : ";
    cin >> gender;
    cout << "person intro : " << endl;
    cout << "name of person : " << name << endl;
    cout << "age of person : " << age << " year" << endl;
    cout << "height of person : " << height << " feet" << endl;
    cout << "gender of person : " << gender << endl;
    return 0;
}