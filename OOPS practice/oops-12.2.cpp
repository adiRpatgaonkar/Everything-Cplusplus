// By: Aditya Patgaonkar
// Date: 30.10.2016
// Demonstrate usage of : address of an overloaded function pointers, default function arguments.
// Semi-auto indentation

#include <iostream>
#include <cstring>

using namespace std;

void MyStrcat(char* x, char* y, int len = -1);

int main()
{
    char a[80] = "Aditya "; char b[80] = "& Ameya";

    MyStrcat(a, b, 5);
    cout << a << endl;
    return 0;
}

void MyStrcat(char* x, char* y, int len)
{
    if (len < 0)
        len = strlen(y);
    while(*x)
        x++;
    while(*y && len--)
        *(x++) = *(y++);
    *x = '\0';
    return;
}
