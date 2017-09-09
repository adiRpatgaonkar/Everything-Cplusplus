// 22.12.16
// By: Aditya R Patgaonkar from CS106B
// Average calculation program. Small variation.
// Observe the average calculation function for more.

#include <iostream>

using namespace std;

double AverageCalc(int senti = -1);

int main(void)
{
    int sentinel = 0;
    cin >> sentinel;
    double avg = AverageCalc(sentinel);
    cout << avg << endl;

    return 0;
}

double AverageCalc(int senti)
{
    cout << "Welcome!\nEnter the inputs please (" <<senti << " if you're done) : " << endl;
    int sum = 0, numOfInputs = 0, y = 0;
    while (true)
    {
        cin >> y;
        if (y == senti) break;
        sum += y; numOfInputs++;
        cout << "Next?";
    }
    return double(sum)/numOfInputs; // Casting is done. Mixed arithmetic operation,
                                    // Double / integer = Double.
}
