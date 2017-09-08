// By: Aditya Patgaonkar.
// Date: 11.10.2016
// Demonstrate usage of classes.

#include <iostream>
#include <ctype.h>
#include <cstring>
#include "googleC++.h"

using namespace std;

int main()
{
    char name[20];
    fgets(name, 20, stdin);
    strcat(name, "\0");
    cout << name;
    return 0;
}
