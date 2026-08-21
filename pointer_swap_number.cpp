#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int *p1 = &a;
    int *p2 = &b;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "\nAfter swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}