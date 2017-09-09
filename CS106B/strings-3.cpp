// 23.12.16
// By: Aditya R Patgaonkar from CS106B
// Testing string objects and member functions.

#include <iostream>

using namespace std;

void RemoveOccurences(char ch, string &str);

int main(void)
{
    cout << "Occurences of : " << endl;
    char c;
    cin >> c; string s = "Yo mama, how are you? I hope it's okay!";
    cout << "Before: " << s << endl; // Before
    RemoveOccurences(c, s);
    cout << "After: " << s << endl; // After
    return 0;
}

void RemoveOccurences(char ch, string &str)
{
    int found = 0;
    /*
     *  str.find(ch) returns the position of the first occurence of the
     *  ch or string::npos if not found in the WHOLE string.
     *  Do you see why the while condition is efficient. Figure it out.
     */
    while ((found = str.find(ch, found)) != string::npos)
        str.erase(found, 1);
    return;
}
