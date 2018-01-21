//Title: Old Enough to Vote
//Concepts : elseif <, >
#include <iostream>
using namespace std;

int main(){
    int userAge;
    int votingAge = 18; //Voting age in the USA
    cout << "What is you age?" << endl;
    cin >> userAge;
    if (userAge == votingAge) {
        cout << "Yay, You finally get to vote";

    } else if(userAge<votingAge) {
        cout << "You are too young to vote" << endl;
    } else {
        cout << "You can vote already" << endl;
    }
    return 0;
}