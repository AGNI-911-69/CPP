#include <iostream>
using namespace std;
class Rectangle
{
    float length, breadth;
public:
    void setData(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float calculateArea()
    {
        return length * breadth;
    }
    float calculatePerimeter()
    {
        return 2 * (length + breadth);
    }
    void display()
    {
        cout << "Area = " << calculateArea() << endl;
        cout << "Perimeter = " << calculatePerimeter() << endl;
    }
};
int main()
{
    Rectangle r;
    float length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    r.setData(length, breadth);
    r.display();

    return 0;
}