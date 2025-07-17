#include <iostream>
using namespace std;
class parant
{
public:
    void pub()
    {
        cout << "this is public" << endl;
    }

protected:
    void prot()
    {
        cout << "this is protected" << endl;
    }

private:
    void priv()
    {
        cout << "this is private" << endl;
    }
};
class child : protected parant
{
public:
    void test()
    {
        pub();
        prot();
        priv();
    }
};
class child2 : public child
{
public:
    void test()
    {
        pub();
        prot();
        priv();
    }
};
int main()
{
    child c1;
    c1.pub();
    c1.prot();
    c1.priv();
    return 0;
}