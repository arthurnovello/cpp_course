#include <iostream>
#include <string>

int main() { 
    std::string name;
    std::string age;
    std::string favoriteFood;
    std::string pets2;

    std::cout << "What is your name?\n";
    getline(std::cin, name);
    std::cout << "Nice to meet you, " << name + "!\n";

    std::cout << "How old are you?\n";
    getline(std::cin, age);
    std::cout << "Cool, I am " << age + " too!!\n";

    std::cout << "What is your favorite food?\n";
    getline(std::cin, favoriteFood);
    std::cout << "Gross, I cannot stand " << favoriteFood + "!\n";

    std::cout << "I have two cats. How about you?\n";
    getline(std::cin, pets2);
    std::cout << "Awesome. I have to go, see you later.\n ";

    std::cin.ignore();

    return 0;
}