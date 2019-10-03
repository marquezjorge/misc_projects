//
// Created by Jorge Marquez on 2019-09-13.
//

#include <iostream>
#include "morsecode.h"
#include <string>

namespace morsecode_translator
{
    MorseCode::MorseCode()
    {
        input = "";
    }



    void MorseCode::setString(std::string userInput)
    {
        input = userInput;
    }



    void MorseCode::translateMessage()
    {
        for(int i = 0; i < input.length(); i++)
        {
            if(validateMessage(input[i]))
            {
                matchChar(input[i]);
                std::cout << "    ";
            }
        }
        std::cout << std::endl << std::endl;
    }



    //if char is a letter, will return 'True' else it returns
    // false for any other character passed to it
    bool MorseCode::validateMessage(char targetChar)
    {
        bool flag = true;

        if(!isspace(targetChar) && !isalpha(targetChar))
            flag = false;

        return flag;
    }



    void MorseCode::matchChar(char targetChar)
    {
        switch (toascii(tolower(targetChar)))
        {
            case 97: std::cout << "* -"; // a
                break;
            case 98: std::cout << "- * * *";// b
                break;
            case 99: std::cout << "- * - *";// c
                break;
            case 100: std::cout << "- * *";//d
                break;
            case 101: std::cout << "*";// e
                break;
            case 102: std::cout << "* * - *";// f
                break;
            case 103: std::cout << "- - *";// g
                break;
            case 104: std::cout << "* * * *";// h
                break;
            case 105: std::cout << "* *";// i
                break;
            case 106: std::cout << "* - - -";// j
                break;
            case 107: std::cout << "- * -";// k
                break;
            case 108: std::cout << "* - * *";// l
                break;
            case 109: std::cout << "- -";// m
                break;
            case 110: std::cout << "- *";// n
                break;
            case 111: std::cout << "- - -";// o
                break;
            case 112: std::cout << "* - - *";// p
                break;
            case 113: std::cout << "- - * -";// q
                break;
            case 114: std::cout << "* - *";// r
                break;
            case 115: std::cout << "* * *";// s
                break;
            case 116: std::cout << "-";// t
                break;
            case 117: std::cout << "* * -";// u
                break;
            case 118: std::cout << "* * * -";// v
                break;
            case 119: std::cout << "* - -";// w
                break;
            case 120: std::cout << "- * * -";// x
                break;
            case 121: std::cout << "- * - -";// y
                break;
            case 122: std::cout << "- - * *";// z
                break;
        }
    }
}