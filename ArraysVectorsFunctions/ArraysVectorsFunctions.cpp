#include <iostream>
#include <string>
#include <vector>


int main()
{
    /*const int arraysize = 20;
    int myarrat[arraysize] = {};

    int stdID[53] = {};
    stdID[2] = 200;
    std::cout << stdID[50];*/

    /*double num[5] = {};
    std::cout << "Enter a number: ";
    std::cin >> num[0];
    std::cout << num[0];*/

    /*double me[100] = {};
    std::cout << "Size of me is " << sizeof(me) / sizeof(me[0]) << "\n";

    for (int i = 0; i < sizeof(me) / sizeof(me[0]); i++) {
        std::cout << me[i] << " ";
    }*/

    /*double Print[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int j = 0; j < sizeof(Print) / sizeof(Print[0]); j++) {
        std::cout << Print[j] << " ";
        j++;
        std::cout << Print[j] << " ";
        j++;
        std::cout << Print[j] << "\n";
    }*/

    /*std::vector <char> scores = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0) {
            std::cout << "\n\n";
        }
        std::cout << "\t" << scores[i] << " ";
    }*/

    std::vector <char> numbers = {};
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter a number: " << "\n";
        std::cin >> numbers[i];
        std::cout << "\n";
    }

    std::cout << numbers[0] << numbers[1] << numbers[2] << numbers[3] << numbers[4];
}