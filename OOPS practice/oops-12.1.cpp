// By: Aditya Patgaonkar
// Date: 30.10.2016
// Demonstrate usage of : address of an overloaded function pointers, default function arguments.
// Semi-auto indentation

#include <iostream>
#include <cstring>
#include "googleC++.h"

using namespace std;

void SautoIndent(const char* input, int noOfIndents = -1);

int main()
{
    SautoIndent("Amu is my brother", 5);
    SautoIndent("Shriyaan is my hero", 7);
    SautoIndent("I am the eldest brother by age.");

    return 0;
}

void SautoIndent(const char* input, int noOfIndents)
{
    // Referred from Herbert Schidlt.
    static int i = 0;

    if (noOfIndents >= 0)
        i = noOfIndents; // New indent value.
    else
        noOfIndents = i; // Use the old indent value
    for (; noOfIndents; noOfIndents--)
            cout << " ";

    cout << input << "\n" ;
    return;
}
