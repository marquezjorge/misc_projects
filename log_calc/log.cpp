//
// Created by Jorge Marquez on 2019-09-02.
//

#include "log.h"
#include <iostream>
#include "math.h"

namespace log_calc
{
    LogCalc::LogCalc()
    {
        logBase = 0;
        operand = 0;
    }



    LogCalc::LogCalc(double inBase, double inOperand)
    {
        logBase = inBase;
        operand = inOperand;
    }



    void LogCalc::setLogBase(double newBase)
    {
        logBase = newBase;
    }



    double LogCalc::getLogBase()
    {
        return logBase;
    }



    void LogCalc::setOperand(double newOperand)
    {
        operand = newOperand;
    }



    double LogCalc::getOperand()
    {
        return operand;
    }



    double LogCalc::calcLog() const
    {
        double temp = 0;

        temp = log(operand);

        return temp / log(logBase);
    }
};

