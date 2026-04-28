#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream writing;
    writing.open("task1.txt");
    writing << "I am writing in file" << endl;
    writing.close();

    ifstream reading("task1.txt", ios::in);

    if (!reading)
    {
        cout << "eroooooooor" << endl;
        return 1;
    }

    cout << "showing file content" << endl;

    char ch;
    while (reading.get(ch))
    {
        cout << ch;
    }
    cout << "end of the file reached" << endl;
    return 0;
}
