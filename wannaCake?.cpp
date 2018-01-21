//Title: Cake?
//Concepts: char, yes or no.
#include <iostream>
using namespace std;

int main () {
    char answer;
    cout << "Would you like some cake? (type y for yes or n for no)" << endl;
    cin >> answer;
    if(answer == 'y') {
        int number;
        cout << "How many pieces would you like?" << endl;
        cin >> number;
        cout << "Here is " << number << " pieces of cake!" << endl;
    } else {
        cout << "Soo... What are you doing on a cake shop?" << endl;
    }
    return 0;
}