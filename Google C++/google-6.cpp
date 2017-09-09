// Aditya.R.Patgaonkar
// 10.9.2016
// Illustrate: Math Puzzle-1.

#include <iostream>

using namespace std;

int main(void)
{
    int noH = 100, noP = 100, noR = 100;
    double pH = 10.0, pP = 3.0, pR = 0.5, bucks = 100;
    

    int sum = (pH * noH) + (pP * noP) + (pR * noR);

    while (sum > bucks)
    {
        --noH; --noP; --noR;
        sum = (pH * noH) + (pP * noP) + (pR * noR);
    }
    cout << sum << " " << noH + noP + noR << endl;

}