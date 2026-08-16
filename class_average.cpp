#include <iostream>
using namespace std;
class student
{
public:
    int marks1, marks2, marks3;
    float average;

    void input()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    void calculateAverage()
    {
        average = (marks1 + marks2 + marks3) / 3.0;
    }
    void display()
    {
        cout << "Marks: " << marks1 << " " << marks2 << " " << marks3 << endl;
        cout << "Average = " << average << endl;
    }
};

int main() {
    student s;

    s.input();
    s.calculateAverage();
    s.display();

    return 0;
}