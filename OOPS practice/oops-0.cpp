// By: Aditya Patgaonkar.
// Date: 9.10.2016
// Demonstrate usage of classes.

#include <iostream>
#include "googleC++.h"

using namespace std;

#define DEBUG
#define Q_SIZE 12

// Stack class
class queue
{
    int q[Q_SIZE];
    int first, last;

public:
    queue();
    void Enqueue(int num);
    void Dequeue();
    void ShowQ();
};

queue::queue()
{
    (first = 0, last = 0);
}

void queue::Enqueue(int num)
{
    q[last] = num;
    last++;

    #ifdef DEBUG
        cout << last << endl;
    #endif
    return;
}

void queue::Dequeue()
{
    first++;
    #ifdef DEBUG
        cout << last << endl;
    #endif
    return;
}

void queue::ShowQ()
{
    for(int i = first; i < last; i++)
        cout << q[i] << " | ";
    cout << endl;
    return;
}

int main()
{
    queue myQ;
    cout << "Let's begin," << endl;
    char op = '\0';
    do
    {
        cout << "What do you wish to do: (E)nqueue or (D)equeue or press -1 to exit?" << endl;
        cin >> op;
        if (op == 'E' || op == 'e')
        {
            cout << "Give me an integer please" << endl;
            int x = GetInputInt();
            myQ.Enqueue(x);
            #ifdef DEBUG
                myQ.ShowQ();
            #endif
        }
        else if (op == 'D' || op == 'd')
        {
            myQ.Dequeue();
            #ifdef DEBUG
                myQ.ShowQ();
            #endif
        }
        else if (op == 'S' || op == 's')
            myQ.ShowQ();
    }
    while(op != '1');
    return 0;
}
