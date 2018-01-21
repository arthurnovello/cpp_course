//Title: Multiple Choice Question
//Content: switch, break

#include <iostream>
using namespace std;

int main() {
    char answer;
    cout << "Who is 007?\n"
        << "a. Homer Simpson\n"
        << "b. Donald Trump\n"
        << "c. Jason Born\n"
        << "d. James Bond\n"
        << "(type correct letter for the answer and then press enter)\n";
    cin >> answer;
    switch (answer) {
        case 'a': 
            cout << "No, but he would make an awesome secret agent." << endl;
            break;
        case 'b': 
            cout << "Not even close." << endl;
            break;
        case 'c': 
            cout << "Really close." << endl;
            break;
        case 'd': 
            cout << "Yay!!" << endl;
            break;
        default: 
            cout << "Not an answer." << endl;
    }
    return 0;
}