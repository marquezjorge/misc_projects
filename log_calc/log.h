//
// Created by Jorge Marquez on 2019-09-02.
//


#ifndef LOG_CALC_LOG_H
#define LOG_CALC_LOG_H

#include <iostream>

namespace log_calc
{
    class LogCalc
    {
    public:
        LogCalc();
        LogCalc(double base, double operand);
        void setLogBase(double newBase);
        double getLogBase();
        void setOperand(double newOperand);
        double getOperand();
        double calcLog() const;

    private:
        double logBase = 0;
        double operand = 0;

    };
};

#endif //LOG_CALC_LOG_H
