#include <iostream>
#include "log.h"

using namespace log_calc;

void calculatorProgram(LogCalc&, int&);
void printResults(LogCalc);

int main() {

    LogCalc test;
    int choice = 0;

    calculatorProgram(test, choice);

    return 0;
}





void calculatorProgram(LogCalc& test, int& choice)
{
    double num = 0;

    do
    {
        std::cout << "Log Calculator" << std::endl;
        std::cout << "--------------" << std::endl;

        std::cout << "Enter log base: ";
        std::cin >> num;

        test.setLogBase(num);

        std::cout << "Enter operand: ";
        std::cin >> num;

        std::cout << std::endl;

        test.setOperand(num);

        printResults(test);

        std::cout << "\n(-1 to quit, 0 to continue)" << std::endl;
        std::cout << "-> ";
        std::cin >> choice;
        std::cout << std::endl;

    }while(choice != -1);

    std::cout << "Goodbye." << std::endl;

}





void printResults(LogCalc test)
{
    std::cout << "Log" << test.getLogBase() << "("
              << test.getOperand() << ")" << " = ";

    std::cout << test.calcLog() << std::endl;
}