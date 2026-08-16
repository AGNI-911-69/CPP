#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int choice;
    const double PI = 3.141592;

    cout << "--- Shape Area Calculator ---\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "4. Triangle\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;
        }
        case 2:
        {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double area = side * side;
            cout << "Area of Square: " << area << endl;
            break;
        }
        case 3:
        {
            double length, width;
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter width of the rectangle: ";
            cin >> width;
            double area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        }
        case 4:
        {
            double base, height;
            cout << "Enter base of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        }
    }
    return 0;
}