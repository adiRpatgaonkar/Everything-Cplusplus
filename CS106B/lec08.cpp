// 29.12.16
// By: Aditya R Patgaonkar from CS106B
// Lecture 08 : Recursion!

#include <iostream>

using namespace std;

int Choose(int n, int k);

int main(void)
{
    cout << Choose(12, 4) << endl;

    return 0;
}

int Choose(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return (Choose(n - 1, k - 1) + Choose(n - 1, k));

}
