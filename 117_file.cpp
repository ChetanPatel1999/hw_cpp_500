#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("facto.txt");
    while (read.eof() != 1)
    {
        getline(read, s);
        cout << s << endl;
    }
    return 0;
}