#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    int rollNumber;
    string course;
public:
    void inputStudent() {
        inputPerson();

        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();

        cout << "Enter course: ";
        getline(cin, course);
    }
    void displayStudent() {
        displayPerson();
        cout << "Roll number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};
class Graduate : public Student {
private:
    string specialization;
    double percentage;
public:
    void inputGraduate() {
        inputStudent();

        cout << "Enter specialization: ";
        getline(cin, specialization);

        cout << "Enter graduation percentage: ";
        cin >> percentage;
    }
    void displayGraduate() {
        cout << "\n--- Graduate Details ---\n";
        displayStudent();
        cout << "Specialization: " << specialization << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Graduate g;

    g.inputGraduate();
    g.displayGraduate();

    return 0;
}