// By: Aditya Patgaonkar.
// Date: 21.10.2016
// Demonstrate usage of pointers in oop. (Pointers to objects, reference pointers, this pointer)

#include <iostream>
#include "googleC++.h"

using namespace std;

class testClass {
	int x;
public:
	testClass(int a) { x = a; cout << "Constructed object: x = " << x << endl; } // Inline functions. No overhead.
	testClass() { x = 0; }
	void SetX(int a) { x = a; }
	int GetX() { return x; }
	~testClass() { cout << "Bye" << endl; }
};

int main()
{
	testClass allObj[4], *pObj = allObj;

	testClass *pTemp = pObj;
	for (int i = 0; i < 4; i++)
	{
		int tmp = 0;
		cout << "Please input for object " << i + 1 << endl;
		tmp = GetInputInt();
		pTemp->SetX(tmp);
		pTemp++;
	}
	
	pTemp = pObj;
	for (int i = 0; i < 4; i++)
	{
		cout << "Object " << i + 1;
		cout << " " << pTemp->GetX() << endl;
		pTemp++;
	}

	return 0;
}