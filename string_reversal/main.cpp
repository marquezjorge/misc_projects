

#include <iostream>
#include "stringReverse.h"

using namespace string_reversal;

int main() {

    StringReverse test;

    test.readInput(".hello.hi");

    std::cout << test.pop() << std::endl;
    std::cout << test.pop() << std::endl;



    return 0;
}

/*
 * need to finish output and input functions
 * figure out how to copy only a portion of string, a sub string.
 * add more UI in main
 */