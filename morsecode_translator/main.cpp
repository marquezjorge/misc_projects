/*
 * the following uses a class to implement a simple
 * morse code translator. it ignores any spaces and
 * non alphabetic characters when printing output.
 *
 * The Morse Code class contains one private string
 * member 'input', to store the input given by the
 * user.
 */

#include <iostream>
#include <string>
#include "morsecode.h"

using namespace morsecode_translator;

void printMessage(MorseCode&);
void runProgram();

int main() {

    runProgram();

    return 0;
}




void printMessage(MorseCode& test)
{
    std::string userInput;

    std::cout << "Morse Code Translator" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Enter a string to be translated" << std::endl;
    std::cout << "-> ";
    std::getline(std::cin, userInput);
    std::cout << std::endl;

    test.setString(userInput);

}




void runProgram()
{
    MorseCode test;
    std::string choice;

    do
    {
        printMessage(test);
        test.translateMessage();

        std::cout << "Repeat? (yes/no)" << std::endl;
        std::cout << "-> ";
        std::getline(std::cin, choice);
        std::cout << std::endl;
    }
    while(choice == "yes");

    std::cout << "Goodbye!" << std::endl;

}

/* ****** Sample Run ******

Morse Code Translator
-------------------------------
Enter a string to be translated
-> this is a test

-    * * * *    * *    * * *        * *    * * *        * -        -    *    * * *    -

Repeat? (yes/no)
-> yes

Morse Code Translator
-------------------------------
Enter a string to be translated
-> to make s*r3 that *** it works

-    - - -        - -    * -    - * -    *        * * *        * - *            -    * * * *    * -    -                        * *    -        * - -    - - -    * - *    - * -    * * *

Repeat? (yes/no)
-> no

Goodbye!

 */