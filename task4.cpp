#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    float cgpa;
    string dateOfBirth;
    string placeOfBirth;

public:
    void getData()
    {

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter CGPA: ";
        cin >> cgpa;

        cin.ignore();

        cout << "Enter Date of Birth: ";
        getline(cin, dateOfBirth);

        cout << "Enter Place of Birth: ";
        getline(cin, placeOfBirth);
    }

    void writeToFile(ofstream& file)
    {
        file << "Name: " << name << endl;
        file << "Age: " << age << endl;
        file << "CGPA: " << cgpa << endl;
        file << "Date of Birth: " << dateOfBirth << endl;
        file << "Place of Birth: " << placeOfBirth << endl;
    }
};

int main()
{
	Student s[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter data for Student " << i + 1 << endl;
        s[i].getData();
    }

    ofstream file("Data.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].writeToFile(file);
    }

    file.close();

    cout << "\nAll student records saved successfully in Data.txt!" << endl;

    return 0;
}
