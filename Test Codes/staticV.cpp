// By: Aditya Patgaonkar.
// Date: 1.10.2016
// Demonstrate usage of static. (Experimenting.)
// And the Comma Operator. (,)

#include <iostream>
#include "googleC++.h"

using namespace std;

void Series(void);

int main(void)
{
    static int n = GetInputInt();
    for (int i = 0; i < n; i++)
        Series();
    cout << endl;

    return 0;
}

void Series()
{
    static int fact; // Automatically set to 0.

    (cout << fact << " | ", fact += 23); // Comma operator! Awesome!

    return;
}
