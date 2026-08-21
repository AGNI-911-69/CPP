#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int rollNo;
public:
    static int count;
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        count++;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
int Student::count = 0;
int main()
{
    int n, rollNo;
    string name;

    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student* students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of student " << i + 1 << ": ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();

        students[i] = new Student(name, rollNo);
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
    {
        students[i]->display();
        cout << endl;
    }
    cout << "Total objects created: " << Student::count << endl;
    for (int i = 0; i < n; i++)
    {
        delete students[i];
    }
    return 0;
}