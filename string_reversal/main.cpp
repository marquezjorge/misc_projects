

#include <iostream>
#include "stringReverse.h"

using namespace string_reversal;

int main() {

    StringReverse test;

    test.readInput("hello.hi.bob.milo");

    test.printStrings();



    return 0;
}