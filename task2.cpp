#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
	getline(cin, text);

    ofstream file("output.txt",ios::out);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << text;

    file.close();

    cout << "Data written successfully!" << endl;

    return 0;
}
