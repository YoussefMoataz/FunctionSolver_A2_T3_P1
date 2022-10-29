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
