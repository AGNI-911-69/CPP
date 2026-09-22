#include <iostream>
using namespace std;
class Rectangle {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    void display() {
        cout << "Area = " << length * breadth << endl;
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};
int main() {
    float length, breadth;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;

    Rectangle r(length, breadth);
    r.display();

    return 0;
}