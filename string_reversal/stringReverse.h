
#ifndef STRING_REVERSAL_STRINGREVERSE_H
#define STRING_REVERSAL_STRINGREVERSE_H

#include <iostream>

namespace string_reversal
{

    class Node
    {
    public:
        std::string value = "";
        Node *next = nullptr;

        Node(std::string valueIn)
        {
            value = valueIn;
        }
    };



    class StringReverse
    {
    private:
        Node *head = nullptr;

    public:
        StringReverse();
        std::string pop();
        void push(std::string inputIn);
        void readInput(std::string inputIn);
        void printStrings();

    };
}

#endif //STRING_REVERSAL_STRINGREVERSE_H
