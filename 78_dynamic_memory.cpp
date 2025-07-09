// new Keyword is used to allocate dynamic memory.
#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int; // its allocate dynamic memory
    *ptr = 9;
    float *fptr = new float(78.9); // its allocate dynamic memory and also assign value
    cout << "ptr value : " << *ptr << endl;
    cout << "fptr value : " << *fptr << endl;
    if (*ptr % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }

    delete ptr; // its delete dynamic memory
    cout << "\nptr value : " << *ptr << endl;
    return 0;
}