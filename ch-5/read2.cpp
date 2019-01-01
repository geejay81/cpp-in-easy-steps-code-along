#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string line;
    int i;

    ifstream reader("poem.txt");

    if (!reader)
    {
        cout << "Error opening input file" << endl;
        return -1;
    }
    else
    for (i = 0; !reader.eof(); i++)
    {
        getline(reader, line);
        cout << line << endl;
    }

    reader.close();
    cout << "Iterations: " << i << endl;

    return 0;
}