// Aditya.R.Patgaonkar
// 10.9.2016
// Illustrate: GCD; Euclidian Algorithm.
#include <iostream>

using namespace std;

void FindGCD(int , int);

int main(void)
{
    cout << "Let's find out the GCD." << endl << "Enter the two numbers : ";
    int x = 0, b = y;
    cin >> a >> b;
    int GCD = FindGCD(a, b);   
    cout << "GCD = " << GCD << endl;        
}
int GCD(int a, int b)
{
    while ( a != 0 && b != 0 )
    {
        int r = a % b;
        a = b;
        b = r;
    }
    if (a == 0)
        gcd = b;
    else
        gcd = a;

    return gcd;
}