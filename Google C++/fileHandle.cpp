// By: Aditya Patgaonkar.
// Date: 27.09.2016
// TutorialsPoint File I/O

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    cout << "To write: " << endl;
    char data[100];
    cin.getline(data, 100);
    cout << data << endl;
    fstream afile;
    afile.open("G_file.txt", ios::out);
    afile << data << endl;

    afile.close();

    afile.open("Gfile.txt", ios::in);
    cout << "File name: G_file.txt" << endl;
    afile >> data;
    cout << data << endl;

    afile.close();

}
