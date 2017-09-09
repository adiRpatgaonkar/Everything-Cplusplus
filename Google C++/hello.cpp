// AdityaRP: Sept 5/16
// Demonstrate the immortal slogan!
#include <iostream>

// For output formatting, setw()
#include <iomanip>

using namespace std;

int main(void)
{
	/* Hello Google */
	int width = 17;
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << setw(width) << "Hello, Google!";
		}
		cout << endl;
	}

	return 0;
}
