// By: Aditya Patgaonkar.
// Date: 27.09.2016
// Source file for some functions.

#include <iostream>
#include "googleC++.h"

using namespace std;

int GetInputInt()
{
    int x, flag = 0;
    do
    {
        int checkVar = 0;
        if ( !(cin >> checkVar) )
        {
            cout << "Enter a valid input sir/madam." << endl;
            // Clears any error in cin
            cin.clear();

            // Ignores any input on the same line as the error input i.e skips them onto the next line.
            // Skips the max length of the stream.
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            flag = 1;
            // Ignore the remaining statements of the loop and continues onto the next iteration!
            continue;

        } flag = 0;
        x = checkVar;
    }
    while(flag == 1);

    return x;
}

double GetInputDouble()
{
    double x; int flag = 0;
    do
    {
        double checkVar = 0.0, flag = 0;
        if ( !(cin >> checkVar) )
        {
            cout << "Enter a valid input sir/madam." << endl;
            // Clears any error in cin
            cin.clear();

            // Ignores any input on the same line as the error input i.e skips them onto the next line.
            // Skips the max length of the stream.
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            flag = 1;
            // Ignore the remaining statements of the loop and continues onto the next iteration!
            continue;

        } flag = 0;
        x = checkVar;
    }
    while(flag == 1);

    return x;
}

char GetInputChar()
{
    char x; int flag = 0;
    do
    {
        char checkVar = 0, flag = 0;
        if ( !(cin >> checkVar) )
        {
            cout << "Enter a valid input sir/madam." << endl;
            // Clears any error in cin
            cin.clear();

            // Ignores any input on the same line as the error input i.e skips them onto the next line.
            // Skips the max length of the stream.
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            flag = 1;
            // Ignore the remaining statements of the loop and continues onto the next iteration!
            continue;

        } flag = 0;
        x = checkVar;
    }
    while(flag == 1);

    return x;
}
