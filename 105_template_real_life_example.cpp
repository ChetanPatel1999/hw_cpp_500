#include <iostream>
using namespace std;
template <class t>
class complex
{
    t real;
    t image;

public:
    complex() {}
    complex(t a, t b)
    {
        real = a;
        image = b;
    }
    void display()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex<int> c1(12, 5), c2(6, 9), c3, c4;
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c4 = c1 - c2;
    cout << "------------------------" << endl;
    c3.display();
    c4.display();
    cout << "------------------------" << endl;
    complex<float> a1(12.3,5.6),a2(2.1,5.2),a3;
    a3=a1+a2;
    a1.display();
    a2.display();
    a3.display();
    return 0;
}