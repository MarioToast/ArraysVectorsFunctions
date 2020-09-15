#include <iostream>
#include <string>


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

    double me[100] = {};
    std::cout << "Size of me is " << sizeof(me) / sizeof(me[0]) << "\n";

    for (int i = 0; i < sizeof(me) / sizeof(me[0]); i++) {
        std::cout << me[i] << " ";
    }

}