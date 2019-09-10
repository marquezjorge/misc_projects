#include <iostream>
#include "log.h"

using namespace log_calc;

void calculatorProgram(LogCalc);
void printResults(LogCalc);

int main() {

    LogCalc test;

    calculatorProgram(test);

    return 0;
}





void calculatorProgram(LogCalc test)
{
    double num = 0;

    std::cout << "Enter log base: ";
    std::cin >> num;

    test.setLogBase(num);

    std::cout << "Enter operand: ";
    std::cin >> num;

    std::cout << std::endl;

    test.setOperand(num);

    printResults(test);

}





void printResults(LogCalc test)
{
    std::cout << "Log" << test.getLogBase() << "("
              << test.getOperand() << ")" << " = ";

    std::cout << test.calcLog() << std::endl;
}