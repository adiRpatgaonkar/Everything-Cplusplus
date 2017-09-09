// 24.12.16
// By: Aditya R Patgaonkar from CS106B
// File i/o.
#include <iostream>
#include <fstream>
#include "genlib.h"

using namespace std;

/* ifstream is passed by reference because when it is being read, its
 * internal state is changing.
 * Also many library functions need the ifstream to be passed by reference.
 */
int CountLine(ifstream &in)
{
    int count = 0;
    string line;
    while (true)
    {
        getline(in, line);
        if (in.fail()) // Commonly fails at EOF.
        break;
        count++;
    }
    return count;
}

int main()
{
    ifstream in;
    while (true)
    {
        cout << "Enter the file name: ";
        string fileName; cin >> fileName;
        in.open(fileName.c_str());
        if (in.fail())
        {
            in.clear();
                Error("Can't open file");
        }
        else
        { cout << fileName << " has been opened." << endl; break; }
    }
    cout << CountLine(in) << " line(s)." << endl;

    return 0;
}
