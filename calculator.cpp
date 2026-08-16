#include <iostream>
using namespace std;
class calculator
{
public:
    int a, b;
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void add()
    {
        cout << "Addition = " << a + b << endl;
    }
    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }
    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }
    void divide()
    {
        if (b != 0)
            cout << "Division = " << (float)a / b << endl;
        else
            cout << "Cannot divide by zero" << endl;
    }
};
int main()
{
    calculator c;

    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}