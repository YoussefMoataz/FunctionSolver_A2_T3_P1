//
// Created by Youssef Moataz on 10/29/2022.
//
#include "FunctionsHeader.h"

SimpleFunction::SimpleFunction(function<double(double)> fun) {

    // assign the function
    simpleFunction = fun;

}

CompositeFunction::CompositeFunction(function<double(double)> fun1, function<double(double)> fun2) {

    // assign the functions
    compositeFunction1 = fun1;
    compositeFunction2 = fun2;

}

DerivativeFunction::DerivativeFunction(function<double(double)> fun, double h) {

    // assign the function
    derivativeFunction = fun;

}


double SimpleFunction::evaluateAt(double value) {

    // do the operation
    return simpleFunction(value);

}

double CompositeFunction::evaluateAt(double value) {

    // pass the output of the second function to the variables of the fist function
    return compositeFunction1(SimpleFunction(compositeFunction2).evaluateAt(value));

}

double DerivativeFunction::evaluateAt(double value) {

    // calculate the  derivative
    return (SimpleFunction(derivativeFunction).evaluateAt(value + h) -
            SimpleFunction(derivativeFunction).evaluateAt(value - h)) / (2 * h);

}

double cube(double n) {
    return n * n * n;
}

double second(double d) {
    return d * d - 5 * d - 4;
}

double fun(double d) {
    return d * d - 3 * d - 4;
}

// End of the file