#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("output.txt");

    if (!outfile)
    {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    string userInput;
    cout << "Enter a string to write to the file: ";
    getline(cin, userInput);

    outfile << userInput << endl;
    outfile.close();

    cout << "String successfully written to output.txt" << endl;
    return 0;
}
