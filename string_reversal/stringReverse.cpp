//
// Created by Jorge Marquez on 2019-10-12.
//

#include <iostream>
#include "stringReverse.h"

namespace string_reversal
{
    StringReverse::StringReverse()
    {
        head = nullptr;
    }



    std::string StringReverse::pop()
    {
        std::string tempValue;
        Node *temp = head;

        if(head == nullptr)
            return "(empty)";

        tempValue = head -> value;
        head = head -> next;
        delete temp;

        return tempValue;
    }



    void StringReverse::push(std::string inputIn)
    {
        Node *temp = new Node(inputIn);

        temp -> next = head;
        head = temp;
    }



    /* this function interates through the string until it
     * reads a '.', at that point in then uses another loop
     * to iterate up until the position of the dot. using
     * a temp string variable it copies and then pushes that
     * copy onto the stack */
    void StringReverse::readInput(std::string inputIn)
    {
        std::string temp;
        int pos = 0, prevPos = 0, length = inputIn.length();

        for(int i = 0; i <= length; i++)
        {
            if(inputIn[i] == '.' || i == length)
            {
                temp = "";
                pos = i;

                 for(int j = prevPos; j < pos; j++)
                 {
                     temp += inputIn[j];
                 }

                 push(temp);
                 prevPos = pos + 1;
            }
        }
    }



    void StringReverse::printStrings()
    {
        std::string temp;

        do
        {
            temp = pop();

            if(temp != "(empty)")
                std::cout << temp << " ";

        }while(temp != "(empty)");
    }
}