// 23.12.16
// By: Aditya R Patgaonkar from CS106B
// Testing string objects and member functions.

#include <iostream>

using namespace std;

string RemoveOccurences(char ch, string &str);

int main(void)
{
    cout << "Occurences of : " << endl;
    char c;
    cin >> c; string s = "Yo mama, how are you? I hope it's okay!";
    cout << RemoveOccurences(c, s) << endl;
    cout << s << endl;
    return 0;
}

string RemoveOccurences(char ch, string &str)
{
    string result; // Default initialization is an empty string "".
                   // Do not worry, C++ programmer.
    for (int i = 0, n = str.length(); i < n; i++)
    {
        if (str[i] != ch)
            result += str[i];
    }
    return result;
}
