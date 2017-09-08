// By: Aditya Patgaonkar
// Date: 29.10.2016
// Demonstrate usage of : address of an overloaded function pointers, default function arguments.

#include <iostream>

using namespace std;

int AddNum(int x, int y, int z);
int AddNum(int x, int y);
int AddNum(int x);

char Mul2Chars(char x = 'a');

int main()
{
    // Overloaded function pointers
    int (*fp1) (int x, int y, int z) = AddNum;
    int (*fp2) (int x, int y) = AddNum;
    int (*fp3) (int x) = AddNum;
    cout << "Sum1: " << fp1(1, 2, 3) << endl;
    cout << "Sum2: " << fp2(4, 5) << endl;
    cout << "Sum3: " << fp3(6) << endl;

    // Default arguments
    cout << Mul2Chars() << endl;
    return 0;
}

int AddNum(int x, int y, int z)
{
    return (x + y + z);
}

int AddNum(int x, int y)
{
    return (x + y);
}

int AddNum(int x)
{
    return x;
}

char Mul2Chars(char x)
{
    return x * x;
}