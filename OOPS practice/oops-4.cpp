// By: Aditya Patgaonkar.
// Date: 21.10.2016
// Demonstrate usage of some oop concepts

#include <iostream>
#include "googleC++.h"

using namespace std;

class testClass{
    int x;
    public:
    testClass(int a) {x = a; cout << "Constructed object: x = " << x << endl;} // Inline functions. No overhead.
    ~testClass(){cout << "Bye" << endl;}
};

int main()
{
    testClass myClass = 12;

    return 0;
}

