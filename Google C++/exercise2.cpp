// By: Aditya Patgaonkar.
// Date: 27.09.2016
// Exercise Q 2.

#include <iostream>
#include "googleC++.h"

using namespace std;

double Assignments();
double MidTerm();
double FinalExam();
double ClassPart(); // Class participation.

int main(void)
{
    double param1 = Assignments();
    double param2 = MidTerm();
    double param3 = FinalExam();
    double param4 = ClassPart();
    double finalGrade = param1 + param2 + param3 + param4;

    cout << "Your final grade is :" << finalGrade << "!" << endl;
    return 0;
}

double Assignments()
{
    double assignMarks[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the marks of assignment " << i + 1 << ": ";
        assignMarks[i] = GetInputDouble();
    }

    double sum = 0;
    for (int i = 0; i < 4; i++)
        sum += assignMarks[i];
    double average = sum / 4;
    return average * 0.4;
}

double MidTerm()
{
    cout << "Enter your mid-term exam marks: ";
    double midTermMarks = GetInputDouble();
    return midTermMarks * 0.15;
}

double FinalExam()
{
    cout << "Enter your final-exam marks: ";
    double finalExamMarks = GetInputDouble();
    return finalExamMarks * 0.35;
}

double ClassPart()
{
    cout << "Enter the section grade marks: ";
    double classPart = GetInputDouble();
    return classPart * 0.1;
}
