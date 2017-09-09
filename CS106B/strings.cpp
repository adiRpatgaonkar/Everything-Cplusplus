// 23.12.16
// By: Aditya R Patgaonkar from CS106B
// Testing string objects and member functions.

#include <iostream>

using namespace std;

int CountOccurences(char ch, string str);

int main(void)
{
    cout << "Occurences of : " << endl;
    char c;
    cin >> c;
    int count = CountOccurences(c, "Yo mama, how are you? I hope it's okay!");
    cout << count << endl;
    return 0;
}

int CountOccurences(char ch, string str)
{
    int ct = 0;
    for (int i = 0, n = str.length(); i < n; i++)
    {
        if (str[i] == ch)
            ct++;
    }
    return ct;
}
