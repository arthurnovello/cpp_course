//Title: Favorite Birthday Food
//Concepts: srand, rand, %, <time.h>, time(null)
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    string favoriteFood;
    cout << "What is your favorite food?" << endl;
    getline(cin, favoriteFood);
    cout << "I will give you " << 1+rand()%10 << " " <<favoriteFood << " for your birthday" << endl;
    return 0;
}