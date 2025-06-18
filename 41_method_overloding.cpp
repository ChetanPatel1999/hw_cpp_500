#include <iostream>
using namespace std;
class display
{
public:
    void disp(int a)
    {
        cout << "value of a : " << a << endl;
    }
    void disp(char a)
    {
        cout << "value of a : " << a << endl;
    }
    void disp(string a)
    {
        cout << "value of a : " << a << endl;
    }
};
int main()
{
    display d1;
    d1.disp(45);
    d1.disp('K');
    d1.disp("home");
    return 0;
}