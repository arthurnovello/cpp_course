//Title: Incorrect Answer
//Concepts : if-else, Comments, Cammel Case
#include <iostream>
using namespace std;

int main(){
    int userNumber;
    int correctAnswer = 4;
    cout << "What is 2+2?" << endl;
    cin >> userNumber;
    if (userNumber == correctAnswer) {
        cout << "Correct Answer!";

    } else {
        cout << "Wrong Answer! 2+2 = 4!!" << endl;
    }
    return 0;
}