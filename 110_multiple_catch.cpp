#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    try
    {
        throw "hello";
    }
    catch (int a)
    {
        cout << "int catch block is run" << endl;
    }
    catch (double a)
    {
        cout << "double catch block is run" << endl;
    }
    catch (char a)
    {
        cout << "char catch block is run" << endl;
    }
    catch (...) // default catch block
    {
        cout << "default catch block is run";
    }

    try
    {
    }
    catch (int a)
    {
    }
    return 0;
}