// template with different parameter
#include <iostream>
using namespace std;
template <class t1, class t2>
class data
{
    t1 data1;
    t2 data2;

public:
    data(t1 data1, t2 data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }
    void display()
    {
        cout << "object data ...." << endl;
        cout << "data1 = " << data1 << endl;
        cout << "data2 = " << data2 << endl;
        cout << "------------------------" << endl;
    }
};
int main()
{
    data<int, string> d1(12, "ram");
    d1.display();

    data<string, int> d2("home", 678);
    d2.display();

    data<float, float> d3(12.56, 8.90);
    d3.display();

    data<char, string> d4('K', "Tato");
    d4.display();
    return 0;
}