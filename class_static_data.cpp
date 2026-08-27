#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int roll;
    static int count;
public:
    void input()
    {
        cout << "Name and roll: ";
        cin >> name >> roll;
        count++;
    }
    void display()
    {
        cout << name << " " << roll << endl;
    }
    static void showCount()
    {
        cout << "Objects created: " << count;
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    s1.display();
    s2.display();

    Student::showCount();
    return 0;
}
