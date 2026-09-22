#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void getPersonDetails() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }
};
class Student : public Person {
    int rollNo;
public:
    void getStudentDetails() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void display() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main() {
    Student s;
    s.getPersonDetails();
    s.getStudentDetails();
    s.display();

    return 0;
}