//
// Created by Jorge Marquez on 2019-09-13.
//

#ifndef MORSECODE_TRANSLATOR_MORSECODE_H
#define MORSECODE_TRANSLATOR_MORSECODE_H

#include <iostream>
#include <cstring>

namespace morsecode_translator
{
    class MorseCode
    {
    public:
        MorseCode();
        void setString(std::string userInput);
        void matchChar(char targetChar);
        void translateMessage();

    private:
        std::string input;

    };
}

#endif //MORSECODE_TRANSLATOR_MORSECODE_H
