#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write;
    // open method is used to open file if file exist
    // other wise create new file
    write.open("C:\\Users\\WIN\\Documents\\demo\\abc.txt");
    write << "hello dosto\n";
    write << "how are you ?\n";
    write.close();
    return 0;
}