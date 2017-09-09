// By: Aditya Patgaonkar.
// Date: 14.09.2016
// Simple factorial. Recursive function.

#include <iostream>

using namespace std;

int fact(int);

int main(void)
{
    cout << "How many different books?" << endl;
    int books = 0;
    cin >> books;
    cout << "Ways: " << fact(books) << endl;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * fact (n - 1));
}
