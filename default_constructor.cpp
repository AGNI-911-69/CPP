#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int age;
public:
    Student() {
        name = "Unknown";
        age = 0;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Student s;
    s.display();
    return 0;
}