#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("facto.txt");
    getline(read, s);
    cout << s;
    return 0;
}