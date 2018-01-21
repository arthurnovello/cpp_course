#include <iostream>
using namespace std;

int main() {
    int firstnumber, secondnumber;

    cout << "Give me a number: ";
    cin >> firstnumber;
    cout << "Give me a second number: ";
    cin >> secondnumber;
    cout << "The sum of the two numbers: " << firstnumber+secondnumber << endl;
    cout << "The diference of the two numbers: " << firstnumber-secondnumber << endl;
    cout << "The mutiply of the two numbers: " << firstnumber*secondnumber << endl;
    cout << "The division of the two numbers: " << firstnumber/secondnumber << endl;
    cout << "With a remainder of: " << firstnumber%secondnumber << endl;
    return 0;
}