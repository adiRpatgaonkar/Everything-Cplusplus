// By: Aditya Patgaonkar
// Date: 28.10.2016
// Demonstrate usage of returning references in C++.

#include <iostream>

using namespace std;

char &RefFunction(int i);

char s[80] = "Hello Messi";
int main()
{
    RefFunction(5) = 'L';
    cout << s << endl;
    return 0;
}

char &RefFunction(int i)
{
    return s[i];
}
