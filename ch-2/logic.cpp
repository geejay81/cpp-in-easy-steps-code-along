#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0;

    cout << "AND Logic:" << endl;
    cout << "(a && a) " << (a && a) << " (true)" << endl;
    cout << "(b && b) " << (b && b) << " (false)" << endl;
    cout << "(a && b) " << (a && b) << " (false)" << endl;

    cout << "OR Logic:" << endl;
    cout << "(a || a) " << (a || a) << " (true)" << endl;
    cout << "(b || b) " << (b || b) << " (false)" << endl;
    cout << "(a || b) " << (a || b) << " (true)" << endl;

    cout << "NOT Logic:" << endl;
    cout << "!a = " << !a << " (false)" << endl;
    cout << "!b = " << !b << " (true)" << endl;

    return 0;
}