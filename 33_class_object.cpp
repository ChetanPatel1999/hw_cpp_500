#include <iostream>
using namespace std;
class mobile
{
    string name;
    int price;
    string color;

public:
    void set_mobile(string s1, int a, string s2)
    {
        name = s1;
        price = a;
        color = s2;
    }
    void get_mobile()
    {
        cout << "mobile info -----" << endl;
        cout << "mobile name :" << name << endl;
        cout << "mobile price :" << price << endl;
        cout << "mobile color :" << color << endl;
        cout << "------------------------" << endl;
    }
};
int main()
{
    mobile m1, m2, m3;
    m1.set_mobile("oppo", 55000, "red");
    m2.set_mobile("samsung", 70000, "sky-blue");
    m3.set_mobile("vivo", 12000, "black");
    m1.get_mobile();
    m2.get_mobile();
    m3.get_mobile();
    return 0;
}