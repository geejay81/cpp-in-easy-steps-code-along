#include <iostream>
using namespace std;

int main()
{
    float numbers[3];
    numbers[0] = 1.5; numbers[1] = 2.75; numbers[2] = 3.25;

    char name[5] = { 'm', 'i', 'k', 'e', '\0' };
    int coordinates[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "numbers[1]: " << numbers[1] << endl;
    cout << "numbers[2]: " << numbers[2] << endl;
    cout << "name[0]: " << name[0] << endl;
    cout << "Text string: " << name << endl;
    cout << "coordinates[0][2]: " << coordinates[0][2] << endl;
    cout << "coordinates[1][2]: " << coordinates[1][2] << endl;

    return 0;
}

