// By: Aditya Patgaonkar.
// Date: 24.09.2016
// Best income method.

#include <iostream>

using namespace std;

int GetInputInt();
double GetInputDouble();
int OptionEvaluate1();
double OptionEvaluate2(int);
double OptionEvaluate3(int);
void WhichIsBetter(int, double, double);

double costOfProduct;

int main(void)
{
    cout << "Please enter the cost of your company's product: " << endl;
    costOfProduct = GetInputDouble();

    int WeeklySales = 0;
    cout << "Enter your company's weekly sales, please: " << endl;
    WeeklySales = GetInputInt();

    int op1 = OptionEvaluate1();
    double op2 = OptionEvaluate2(WeeklySales);
    double op3 = OptionEvaluate3(WeeklySales);
    cout << "a = " << op1 << "$" << endl; cout << "b = " << op2 << "$" << endl; cout << "c = " << op3 << "$" << endl;

    WhichIsBetter(op1, op2, op3);

    return 0;
}

int GetInputInt()
{
    int x;
    do
    {
        int checkVar = 0;
        if ( !(cin >> checkVar) )
            cout << "Enter a valid input sir/madam." << endl;
        else
        {
            x = checkVar;
            break;
        }
    }
    while(x > 0);

    return x;
}

double GetInputDouble()
{
    double x;
    do
    {
        double checkVar = 0.0;
        if ( !(cin >> checkVar) )
            cout << "Enter a valid input sir/madam." << endl;
        else
        {
            x = checkVar;
            break;
        }
    }
    while(x > 0);

    return x;
}


int OptionEvaluate1()
{
    return 600;
}

double OptionEvaluate2(int sales)
{
    cout << "No of hours you work sir/madam: " << endl;
    int hoursOfWork = GetInputDouble();

    int daysInWeek = 7, bucksPerHour = 7; double commission = 0.1;
    double WeekKaIncome = (hoursOfWork * bucksPerHour * daysInWeek) + (sales * costOfProduct * commission);

    return WeekKaIncome;
}

double OptionEvaluate3(int sales)
{
    int daysInWeek = 7, payPerSale = 20; double commission = 0.2;
    double WeekKaIncome = ( (payPerSale + commission) * sales ) * daysInWeek;

    return WeekKaIncome;
}

void WhichIsBetter(int a, double b, double c)
{
    if (a == b)
    {
        if (b == c)
            cout << "All options will benefit you." << endl;
        else
            cout << "Option 1 and 2 both will benefit you." << endl;
        return;
    }
    else if (b == c)
    {
        cout << "Option 2 and 3 both will benefit you." << endl;
        return;
    }
    else if (c == a)
    {
        cout << "Option 1 and 3 both will benefit you." << endl;
        return;
    }

    if (a > b)
    {
        if (a > c) cout << "Option 1 will benefit you." << endl;
        else cout << "Option 3 will benefit you." << endl;
    }
    else if (b > a)
    {
        if (b > c) cout << "Option 2 will benefit you." << endl;
        else cout << "Option 3 will benefit you." << endl;
    }
    else if (c > a /*Or c > b*/)
        cout << "Option 3 will benefit you." << endl;

    return;
}
