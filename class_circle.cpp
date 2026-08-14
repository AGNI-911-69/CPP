#include <iostream>
#include <iomanip>
using namespace std;

class Circle {
    float radius;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculateArea() {
        const float PI = 3.14159;
        float area = PI * radius * radius;

        cout << fixed << setprecision(2);
        cout << "Area of circle = " << area << endl;
    }
};

int main() {
    Circle c;
    c.input();
    c.calculateArea();

    return 0;
}