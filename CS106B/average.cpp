// 22.12.16
// By: Aditya R Patgaonkar from CS106B
// Average calculation program. What is different?
// Observe the average calculation function for more.

#include <iostream>

using namespace std;

double AverageCalc(int);

int main(void)
{
    int noOfInputs = 0;
    cin >> noOfInputs;
    double avg = averageCalc(noOfInputs);
    cout << avg << endl;

    return 0;
}

double AverageCalc(int a)
{
    cout << "Welcome!\nEnter " << a << " inputs please" << endl;
    int sum = 0;
    for (int i = 0, y = 0; i < a; i++)
    {
        cin >> y;
        sum += y;
    }
    return double(sum)/a; // Casting is done. Mixed arithmetic operation,
                          // Double / integer = Double.
}
