#include <iostream>
using namespace std;

int main()
{
    int a, b, max;

    a = 1, b = 2;

    cout << "Variable a value is ";
    cout << ((a != 1) ? "not one, " : "one, ");
    cout << ((a % 2 != 0) ? "odd" : "even") << endl;

    cout << "Variable b value is ";
    cout << ((b != 1) ? "not one, " : "one, ");
    cout << ((b % 2 != 0) ? "odd" : "even") << endl;

    max = (a > b) ? a : b;
    cout << "Greater value is: " << max << endl;

    return 0;
}