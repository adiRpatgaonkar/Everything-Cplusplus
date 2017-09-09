// Aditya.R.Patgaonkar
// 8.9.2016
// Illustrate: Hello, google. 
#include <iostream>

using namespace std;

int main(void)
{
	// Print ritght aligned Hello word using std i/o formatting

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout.width(17); // To set a field width of 17 places.
			cout.flags(std::ios::left); // Left-align output.
			cout << "Hello, Google!";
		}
		cout << endl;
	}

	return 0;
}