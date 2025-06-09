#include <iostream>
using namespace std;
class mobile
{
public:
    string name;
    int price;
    string color;
};
int main()
{
    mobile m1, m2;
    m1.name = "oppo";
    m1.price = 55000;
    m1.color = "blue";
    cout << "mobile name : " << m1.name << endl;
    cout << "mobile price : " << m1.price << endl;
    cout << "mobile color : " << m1.color << endl;
    m2.name = "samsung";
    m2.price = 70000;
    m2.color = "sky-blue";
    cout<<"-----------------------------------"<<endl;
    cout << "mobile name : " << m2.name << endl;
    cout << "mobile price : " << m2.price << endl;
    cout << "mobile color : " << m2.color << endl;
    return 0;
}