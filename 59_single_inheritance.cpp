//single inheritance
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void set_emp(int a, float b)
    {
        id = a;
        sal = b;
    }
    void get_emp()
    {
        cout << "emp info----- " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
class programer : public emp
{
    string lang;
    string project;

public:
    void setprgm(string s1, string s2)
    {
        lang = s1;
        project = s2;
    }
    void display_prgm()
    {
        cout << "language : " << lang << endl;
        cout << "project : " << project << endl;
    }
};
int main()
{
    programer p1, p2;
    p1.set_emp(101, 12000);
    p1.setprgm("C++", "shoping app");
    p1.get_emp();
    p1.display_prgm();
    return 0;
}