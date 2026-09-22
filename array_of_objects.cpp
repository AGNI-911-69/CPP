#include <iostream>
using namespace std;
class Employee {
    float salary, allowance;
public:
    void getDetails() {
        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter allowance: ";
        cin >> allowance;
    }
    void display() {
        cout << "Salary: " << salary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << salary + allowance << endl;
    }
};
int main() {
    Employee emp[3];
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].getDetails();
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].display();
    }
    return 0;
}