// By: Aditya Patgaonkar.
// Date: 1.10.2016
// Demonstrate usage of extern. (Experimenting.)

#include <iostream>

using namespace std;

extern int x, y;

void printExtern();
int x = 10; int y = 20;
int main(void)
{

    cout << "main: " << x << y << endl;
    printExtern();

    return 0;
}

void printExtern()
{
    cout << "printExtern: " << x + 10 << y + 10 << endl;
    return;
}
