#include <iostream>
using namespace std;

int main()
{
    int num;
    int nums[50];
    float decimal;
    bool isTrue;
    unsigned int max;
    char letter;
    double pi;
    short int number;
    char letters[50];

    cout << "int size: " << sizeof(num) << endl;
    cout << "int[50] size: " << sizeof(nums) << endl;
    cout << "float size: " << sizeof(decimal) << endl;
    cout << "bool size: " << sizeof(isTrue) << endl;
    cout << "unsigned int size: " << sizeof(max) << endl;
    cout << "char size: " << sizeof(letter) << endl;
    cout << "double size: " << sizeof(pi) << endl;
    cout << "short size: " << sizeof(number) << endl;
    cout << "char[50] size: " << sizeof(letters) << endl;

    return 0;
}