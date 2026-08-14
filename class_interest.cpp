#include <iostream>
using namespace std;

class Interest {
    float principal, rate, time;

public:
    void input() {
        cout << "Enter principal amount: ";
        cin >> principal;

        cout << "Enter rate of interest: ";
        cin >> rate;

        cout << "Enter time in years: ";
        cin >> time;
    }

    void calculate() {
        float simpleInterest = (principal * rate * time) / 100;

        cout << "\nSimple Interest = " << simpleInterest << endl;
    }
};

int main() {
    Interest i;
    i.input();
    i.calculate();

    return 0;
}