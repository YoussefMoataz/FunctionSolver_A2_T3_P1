/*
FCAI - Programming 2 - 2022 - Assignment 2 - Sheet 2 - Problem 1

Program Name:           Function Solver
Program Description:    This program makes it possible to define a math function
                        and return the output of three types of functions:
                        -Simple Function -Composite Function -Derivative Function
Last Modification Date: October 29, 2022
Version:                v1.0.0
Author:                 Youssef Moataz
ID:                     20210488
Group:                  A
Labs:                   S10
Purpose:                Make math calculations easier
*/

#include "FunctionsFunctions.cpp"

int main() {

    SimpleFunction f1
            ([](double n) ->
                     double { return n * n; });
    cout << f1.evaluateAt(5) << endl;
    DerivativeFunction f2(second, 5);
    cout << f2.evaluateAt(5) << endl;
    CompositeFunction f3(fun, cube);
    cout << f3.evaluateAt(5) << endl;

    return 0;
}

// End of the file