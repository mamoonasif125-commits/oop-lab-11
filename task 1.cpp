#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream infile;
    infile.open("input.txt");

    if (!infile)
    {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    char ch;
    cout << "File contents:" << endl;
    while (infile.get(ch))
    {
        cout << ch;
    }

    infile.close();
    return 0;
}
