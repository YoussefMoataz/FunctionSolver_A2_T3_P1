//
// Created by Youssef Moataz on 10/29/2022.
//

#ifndef FUNCTIONSOLVER_A2_T3_P1_FUNCTIONSHEADER_H
#define FUNCTIONSOLVER_A2_T3_P1_FUNCTIONSHEADER_H

#endif //FUNCTIONSOLVER_A2_T3_P1_FUNCTIONSHEADER_H

#include <iostream>
#include "functional"

using namespace std;

class Function {
public:
    // to be implemented
    inline virtual double evaluateAt(double value) = 0;
};

class SimpleFunction : public Function {
private:
    function<double(double)> simpleFunction;
public:

    inline SimpleFunction(function<double(double)> fun);

    inline virtual double evaluateAt(double value);
};

class CompositeFunction : public Function {
private:
    function<double(double)> compositeFunction1;
    function<double(double)> compositeFunction2;
public:
    inline CompositeFunction(function<double(double)> fun1, function<double(double)> fun2);

    inline virtual double evaluateAt(double value);
};

class DerivativeFunction : public Function {
private:
    function<double(double)> derivativeFunction;
    // default value for the limit
    double h = 0.000001;
public:
    inline DerivativeFunction(function<double(double)> fun, double h);

    inline virtual double evaluateAt(double value);
};

inline double cube(double n);

inline double second(double d);

inline double fun(double d);

// End of the file