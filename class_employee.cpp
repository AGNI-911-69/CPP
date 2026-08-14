#include <iostream>
#include <string>
using namespace std;

class Employee {
    int employeeId;
    string name;
    float salary;

public:
    void input() {
        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}