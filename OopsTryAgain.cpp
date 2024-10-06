/*
Nick Spizzirri
10/05/2024
CSC122
*/

// Libraries + Headers
#include <iostream>
#include <string>
#include <limits>
#include "OopsTryAgain.h"
using namespace std;

// Main Space
int main() {
    int test1 = inputValidation(10, 20, "Please enter a number between 10 and 20: ", "Uh oh, your input wasn't between 10 and 20. Try again, silly goose.");
    cout <<"\nGood job!! You entered: " << test1 <<", which is valid!!" << endl;
    int test2 = inputValidation(numeric_limits<int>::min(), 100, "Please enter a number less than 100: ", "Uh oh, your input wasn't less than 100. Try again, silly goose.");
    cout << "\nGood job!! You entered: " << test2 << ", which is valid!!" << endl;
    int test3 = inputValidation(1, numeric_limits<int>::max(), "Please enter a number greater than 1: ", "Uh oh, your input wasn't greater than 1. Try again, silly goose.");
    cout << "\nGood job!! You entered: " << test3 << ", which is valid!!" << endl;
    int test4 = inputValidation(numeric_limits<int>::min(), numeric_limits<int>::max(), "Please enter any number: ", "Uh oh, your input wasn't a number. Try again, silly goose.");
    cout << "\nGood job!! You entered: " << test4 << ", which is valid!!" << endl;
    return 0;
}