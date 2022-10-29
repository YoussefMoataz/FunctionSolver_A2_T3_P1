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

    return simpleFunction(value);

}

double CompositeFunction::evaluateAt(double value) {

    return compositeFunction1(SimpleFunction(compositeFunction2).evaluateAt(value));

}

double DerivativeFunction::evaluateAt(double value) {

    return (SimpleFunction(derivativeFunction).evaluateAt(value + h) -
            SimpleFunction(derivativeFunction).evaluateAt(value)) / h;

}