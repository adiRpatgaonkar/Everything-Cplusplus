/*
 *
 * DEMO: Classes intro.
 *
 */

#include <iostream>

using namespace std;

class MUJstudent
{
public:
    char name[40]; // Only 40 chars including \0
    char course[20], branch[20]; // Only 20 chars including \0
    char regNo[9]; // Not more than 9 digits
};

int main(void)
{
    MUJstudent me;
    cout << "Name: "; cin >> me.name;
    cout << "Course: "; cin >> me.course;
    cout << "Branch: "; cin >> me.branch;
    cout << "Registration number: "; cin >> me.regNo;

    return 0;
}
