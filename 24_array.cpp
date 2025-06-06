#include <iostream>
using namespace std;
int main()
{
    string city[5] = {"indore", "ujjain", "ratlam", "nagda", "mhow"};
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << city[i] << endl;
    }
    for (i = 0; i < 5; i++)
    {
        cout << city[i][2] << endl;
    }
    return 0;
}