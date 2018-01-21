#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double firstnumber, secondnumber;

    cout << setprecision(2) << fixed;
    cout << "Give me a number: ";
    cin >> firstnumber;
    cout << "Give me a second number: ";
    cin >> secondnumber;
    cout << firstnumber << "+" << secondnumber << "=" << firstnumber+secondnumber << endl;
    cout << firstnumber << "-" << secondnumber << "=" << firstnumber-secondnumber << endl;
    cout << firstnumber << "*" << secondnumber << "=" << firstnumber*secondnumber << endl;
    cout << firstnumber << "/" << secondnumber << "=" << firstnumber/secondnumber << endl;
    return 0;
}