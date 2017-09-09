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
    cout << s << endl; // Before
    RemoveOccurences(c, s);
    cout << s << endl; // After
    return 0;
}

void RemoveOccurences(char ch, string &str)
{
    for (int i = 0, n = str.length(); i < n; i++)
    {
        if (str[i] == ch)
            str.erase(i, 1);
    }
    return;
}
