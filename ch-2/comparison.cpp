#include <iostream>
using namespace std;

int main()
{
    int nil = 0, num = 0, max = 1;
    char cap = 'A', low = 'a';

    cout << "Equality comparisons: " << endl;
    cout << "(0 == 0) " << (nil == num) << endl;
    cout << "(A == a) " << (cap == low) << endl;

    cout << "Inequality comparisons: ";
    cout << "(0 != 1) " << (nil != max) << endl;
    cout << "Greater comparison: ";
    cout << "(0 > 1) " << (nil > max) << endl;
    cout << "Lesser comparison: ";
    cout << "(0 < 1) " << (nil < max) << endl;
    cout << "Greater or equal comparison: ";
    cout << "(0 >= 1) " << (nil >= max) << endl;
    cout << "Lesser or equal comparison: ";
    cout << "(0 <= 1) " << (nil <= max) << endl;

    return 0;
}