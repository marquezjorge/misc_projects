//
// Created by Jorge Marquez on 2019-10-12.
//

#include <iostream>
#include "stringReverse.h"
#include "string.h"

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



    void StringReverse::readInput(std::string inputIn)
    {
        std::string temp;
        int pos = 0, prevPos = 0;

        for(int i = 0; i < inputIn.length(); i++)
        {
            if(inputIn[i] == '.' || i == inputIn.length())
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
        do
        {
            std::cout << pop() << std::endl;

        }while(pop() != "(empty)");
    }
}