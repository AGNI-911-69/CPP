#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void getPersonDetails() {
        cout << "Enter teacher name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
};
class Department {
protected:
    string department;

public:
    void getDepartmentDetails() {
        cout << "Enter department: ";
        getline(cin, department);
    }
};
class Teacher : public Person, public Department {
    string subject;
public:
    void getTeacherDetails() {
        cout << "Enter subject: ";
        getline(cin, subject);
    }
    void display() {
        cout << "\nTeacher Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
    }
};
int main() {
    Teacher t;

    t.getPersonDetails();
    t.getDepartmentDetails();
    t.getTeacherDetails();
    t.display();

    return 0;
}