// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int i;
    std::cout << "Enter leap year (must be an integer): ";
    std::cin >> i;

    bool isLeapYear;

    if (i % 400 == 0) {
        isLeapYear = true;
    }

    else if (i % 100 == 0) {
        isLeapYear = false;
    }

    else if (i % 4 == 0){
        isLeapYear = true;
    }

    else {
        isLeapYear = false;
    }

    if (isLeapYear) {
        std::cout << "This is a leap year! Enjoy the extra day.\n";
    }

    else {
        std::cout << "This is not a leap year! One less day to enjoy.\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
