#include <iostream>
#include <iomanip>
using namespace std;
class Box {
    float length, breadth, height;
public:
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    float calculateVolume() {
        return length * breadth * height;
    }
    void display() {
        cout << fixed << setprecision(2);

        cout << "\n--- Box Details ---\n";
        cout << "Length  : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Height  : " << height << endl;
        cout << "Volume  : " << calculateVolume() << " cubic units" << endl;
    }
};
int main() {
    float length, breadth, height;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    cout << "Enter height: ";
    cin >> height;

    Box box1(length, breadth, height);
    box1.display();

    return 0;
}