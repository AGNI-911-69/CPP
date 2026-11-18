#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int rollNo;
    float fees;
    string course;
public:
    Student(string studentName, int roll, float feeAmount, string studentCourse) {
        name = studentName;
        rollNo = roll;
        fees = feeAmount;
        course = studentCourse;
    }
    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        fees = s.fees;
        course = s.course;
    }
    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Course  : " << course << endl;
        cout << "Fees Paid: Rs. " << fees << endl;
    }
};
int main() {
    string name, course;
    int rollNo;
    float fees;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter course name: ";
    getline(cin, course);

    cout << "Enter fees paid: ";
    cin >> fees;

    Student student1(name, rollNo, fees, course);

    Student student2(student1);

    cout << "\nOriginal student record:";
    student1.display();

    cout << "\nCopied student record:";
    student2.display();

    return 0;
}