// By: Aditya Patgaonkar
// Date: 29.10.2016
// Demonstrate usage of dynamic allocation operators: nothrow alternative!

#include <iostream>
#include <stdlib.h>
#include <new>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 2)
    {
        cout << "Usage: ./oops-9 int" << endl;
        return 1;
    }

    int* p = new(nothrow)int (atoi(argv[1]));
    if (!p)
    {
    	cout << "Allocation failure" << endl;
    	return 2;
    }

    cout << *p << endl;
    delete p;

    return 0;
}
