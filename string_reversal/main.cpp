/*
 * the following program uses a stack implemented via a singly
 * linked list to reverse word order in string.
 */

#include <iostream>
#include "stringReverse.h"

using namespace string_reversal;


void runProgram(StringReverse&);


int main() {

    StringReverse test;

    runProgram(test);

    return 0;
}



void runProgram(StringReverse& test)
{
    std::string choice, input;

    do
    {
        std::cout << "Enter a string to be reversed, using '.' instead of spaces" << std::endl;
        std::cout << "-> ";
        std::cin >> input;

        test.readInput(input);
        test.printStrings();

        std::cout << "\n\nRepeat? (yes/no)" << std::endl;
        std::cout << "-> ";
        std::cin >> choice;

    }while(choice != "no");

    std::cout << "\nGoodbye!" << std::endl;

}