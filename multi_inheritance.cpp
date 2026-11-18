#include <iostream>
#include <string>
using namespace std;
class Teacher {
protected:
    string subject;
public:
    void inputTeacher() {
        cout << "Enter subject taught: ";
        getline(cin, subject);
    }
    void displayTeacher() {
        cout << "Subject: " << subject << endl;
    }
};
class Researcher {
protected:
    string researchArea;
public:
    void inputResearcher() {
        cout << "Enter research area: ";
        getline(cin, researchArea);
    }
    void displayResearcher() {
        cout << "Research area: " << researchArea << endl;
    }
};
class Professor : public Teacher, public Researcher {
private:
    int publicationCount;
public:
    void inputProfessor() {
        inputTeacher();
        inputResearcher();

        cout << "Enter number of publications: ";
        cin >> publicationCount;
    }
    void displayProfessor() {
        cout << "\n--- Professor Details ---\n";
        displayTeacher();
        displayResearcher();
        cout << "Publication count: " << publicationCount << endl;
    }
};
int main() {
    Professor p;

    p.inputProfessor();
    p.displayProfessor();

    return 0;
}