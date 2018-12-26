#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Assign values: ";
    cout << "a = " << (a = 8) << " ";
    cout << "b = " << (b = 4) << endl;

    cout << "Add and assign: ";
    cout << "a += b, a = " << (a += b) << endl;
    cout << "Subtract and assign: ";
    cout << "a -= b, a = " << (a -= b) << endl;
    cout << "Multiply and assign: ";
    cout << "a *= b, a = " << (a *= b) << endl;
    cout << "Divide and assign: ";
    cout << "a /= b, a = " << (a /= b) << endl;
    cout << "Modulus and assign: ";
    cout << "a %= b, a = " << (a %= b) << endl; 

    return 0;
}