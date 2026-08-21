#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *p1 = &a;
    int *p2 = &b;

    int sum = *p1 + *p2;

    cout << "Sum = " << sum << endl;

    return 0;
}