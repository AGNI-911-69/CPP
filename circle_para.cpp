#include <iostream>
using namespace std;
class Circle {
    float x, y, radius;
public:
    Circle(float xValue, float yValue, float r) {
        x = xValue;
        y = yValue;
        radius = r;
    }
    void display() {
        cout << "\nCircle details:\n";
        cout << "Center point: (" << x << ", " << y << ")\n";
        cout << "Radius: " << radius << endl;
    }
};
int main() {
    float x, y, radius;

    cout << "Enter x-coordinate: ";
    cin >> x;

    cout << "Enter y-coordinate: ";
    cin >> y;

    cout << "Enter radius: ";
    cin >> radius;

    Circle c(x, y, radius);
    c.display();

    return 0;
}