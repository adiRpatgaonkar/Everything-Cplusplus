/*
 *
 * Explore the string and charachter manipulator libraries
 * & functions!
 *
 */
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(void)
{
    // DEMO : Use of cctype
    char messedUpStr[] = "dasdas/dAS<DASLDA:S<AS<D";
    char trav = messedUpStr[0];
    for (int i = 0; trav != '\0'; trav = messedUpStr[++i])
    {
        if (isalpha(trav))
            cout << (char) (isupper(trav) ? tolower(trav) : trav);
        else if (ispunct(trav))
            cout << " ";
    }
    cout << endl;

    // DEMO : Use of cstring
    int nameL = 20;
    char fname[nameL], mname[nameL], lname[nameL], fullName[60] = "";
    cout << "First name (Must be under 20 chars) : ";
    cin >> fname;
    cout << "Middle name (Must be under 20 chars) : ";
    cin >> mname;
    strncat(fullName, fname, strlen(fname));
    strncat(fullName, mname, strlen(mname));
    cout << "Last name (Must be under 20 chars) : ";
    cin >> lname;
    strncat(fullName, lname, strlen(lname));

    cout << "Full name camel-cased : " << fullName << endl;

    return 0;
}
