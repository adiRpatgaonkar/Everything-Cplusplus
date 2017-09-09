// By: Aditya Patgaonkar.
// Date: 13.09.2016
// String class practice

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string myName = "My name is Aditya";
    string myBrosName = "Ameya";

    string myNameCopy = myName.substr(11, 6);
    cout << myNameCopy << endl;

    myName.replace(11, 5, myBrosName);
    cout << myName << endl;

    cout << myName.find(myBrosName, 3) << endl;
}
