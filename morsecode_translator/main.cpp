#include <iostream>
#include <string>
#include "morsecode.h"

using namespace morsecode_translator;

int main() {

    MorseCode test;

    test.setString("Hello World");

    MorseCode test1;

    test1.setString("Hola Mundo");

    test.translateMessage();
    test1.translateMessage();

    return 0;
}