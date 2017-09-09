// Aditya.R.Patgaonkar
// 9.9.2016
// Illustrate: Pseudo-random number generation.
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void)
{
    cout << "1st number " << rand() % 100 << endl;
    srand(time(NULL));
    cout << "Random number " << rand() % 100 << endl;
    srand(1);
    cout << "Again the same number " << rand() % 100 << endl;
}