// template :- tempalte is a template/blueprint for
// class like class is blueprint of object.
// template avoid same  class repetaion for different
// data type data member of class.
#include <iostream>
using namespace std;
template <class t>
class data
{
    t data1;
    t data2;

public:
    data(t data1, t data2)
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
    data<int> d1(12, 45);
    d1.display();

    data<string> d2("home", "pen");
    d2.display();

    data<float> d3(12.56, 8.90);
    d3.display();

    data<char> d4('K', 'T');
    d4.display();
    return 0;
}