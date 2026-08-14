#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNumber;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        s[i].input();
    }

    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].display();
    }

    return 0;
}
