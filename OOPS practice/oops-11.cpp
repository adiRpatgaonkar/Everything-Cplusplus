// By: Aditya Patgaonkar
// Date: 29.10.2016
// Demonstrate usage of copy constructors!

#include <iostream>
#include <new>
#include "googleC++.h"

using namespace std;

class student
{
	int *p1;
	char *p2;

public:
	student(){}

	student(char x[], int r);

	student(const student &o);

	~student()
	{
		cout << "Destructing..." << endl;
		delete p1; delete p2;
	}
};

student::student(char x[], int r)
{
	try
	{
		p1 = new int (r); // Roll number.
		p2 = new char [3]; // For initials.
	}
	catch(bad_alloc xa)
	{
		cout << "Out of mem, boss!" << endl;
		exit(EXIT_FAILURE);
	}
	 
	for(int i = 0; i < 3; i++)
		p2[i] = x[i];	
}

student::student(const student &o) // Copy contructor
{
	
	try
	{
		p1 = new int;	
		p2 = new char [3];
	}
	catch(bad_alloc xa)
	{
		cout << "Out of mem, boss!" << endl;
		exit(EXIT_FAILURE);
	}
	*p1 = *(o.p1); 
	 
	for(int i = 0; i < 3; i++)
		p2[i] = o.p2[i];
}


int main()
{
	cout << "Enter your initials: ";
	char initials[3];
	GetInputString(initials, 3);
	cout << "Enter your roll number: " << endl;
	int a = GetInputInt();
	student s1(initials, a);

	student s2 = s1; // Does not call copy constructor. This is a simple assignment.age
	student s3(s2);

	
	return 0;
}