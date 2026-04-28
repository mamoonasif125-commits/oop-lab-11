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
    int count = 0;

    while (infile.get(ch))
    {
        count++;
    }

    infile.close();
    cout << "Total number of characters in file: " << count << endl;
    return 0;
}
