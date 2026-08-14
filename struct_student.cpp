#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNumber;
    string name;
    float marks;
};

int main()
{
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNumber;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}