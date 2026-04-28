#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
  private:
    string name;
    int    age;
    float  cgpa;
    string dateOfBirth;
    string placeOfBirth;

public:
    Student() : age(0), cgpa(0.0f)
{
  
}

    void getData() 
{
        cout << "\n--- Enter Student Details ---" << endl;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Age: ";
        cin >> age;

        cout << "CGPA: ";
        cin >> cgpa;

        cout << "Date of Birth (DD/MM/YYYY): ";
        cin.ignore();
        getline(cin, dateOfBirth);

        cout << "Place of Birth: ";
        getline(cin, placeOfBirth);
    }

    void writeToFile(ofstream& outfile)
     {
        outfile << "----------------------------" << endl;
        outfile << "Name          : " << name         << endl;
        outfile << "Age           : " << age           << endl;
        outfile << "CGPA          : " << cgpa          << endl;
        outfile << "Date of Birth : " << dateOfBirth   << endl;
        outfile << "Place of Birth: " << placeOfBirth  << endl;
        outfile << "----------------------------" << endl;
    }

    void display() const
     {
        cout << "Name: "           << name
             << ", Age: "          << age
             << ", CGPA: "         << cgpa
             << ", DOB: "          << dateOfBirth
             << ", Place: "        << placeOfBirth << endl;
    }
};

int main() 
{
    const int SIZE = 5;
    Student students[SIZE];

    cout << "  Bahria University Admission System    " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nStudent " << (i + 1) << " of " << SIZE << ":" << endl;
        students[i].getData();
    }
    ofstream outfile;
    outfile.open("Data.txt");

    if (!outfile)
    {
        cout << "Error: Could not open Data.txt for writing!" << endl;
        return 1;
    }

    outfile << "  Bahria University - Student Records   " << endl;
 

    for (int i = 0; i < SIZE; i++)
    {
        outfile << "Record #" << (i + 1) << endl;
        students[i].writeToFile(outfile);
    }

    outfile.close();

   
    cout << "\nAll 5 student records successfully saved to Data.txt!" << endl;
  
    return 0;
}
