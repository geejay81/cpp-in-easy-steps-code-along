#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    string term = "100";
    int number = 100;

    int num;
    string text;
    stringstream stream;

    stream << term;     // Load the string in to the stream
    stream >> num;      // Extract the integer

    num /= 4;           // Carry out some logic on the number
    cout << "Integer value: " << num << endl;

    stream.str("");     // Empty the stringstream
    stream.clear();     // Empty the bit flags

    stream << number;   // Load the integer in to the stream
    stream >> text;     // Extract the string

    text += " Per Cent";
    cout << "String value: " << text << endl;

    return 0;
}