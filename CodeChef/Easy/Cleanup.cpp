// By: Aditya Patgaonkar
// Date: 19.11.2016
// Clean-up
// Output is ok. But CodeChef not accepting, so some fault is still there.
#include <iostream>
using namespace std;
int main()
{
    //cout << "Number of test cases: " << endl;
    int num = 0; cin >> num; if (num > 50) return -1;
    for (int z = 0; z < num; z++)
    {
        cout << "Enter the number of jobs & jobs completed: ";
        int n = 0, m = 0; cin >> n >> m; if (n > 1000 || m > n || m < 0) return 1;
        cout << "Enter the indices of jobs completed: ";
        int complete[m];
        for (int i = 0, x = 0, y = 0; i < m; i++)
        {
            if ( (cin >> y) > n ) return 1;
            complete[x++] = y;
        }
        int d = n - m; // Num of jobs to be completed
        int jobs[d];
        for (int i = 0, x = 0, flg = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i + 1 != complete[j]) flg = 1;
                else { flg = 0; break; }
            }
            if (flg) jobs[x++] = i + 1;
        }
        for (int i = 0; i < d; i+=2)
            cout << jobs[i] << " ";
        cout << "\n";
        for (int i = 1; i < d; i+=2)
            cout << jobs[i] << " ";
        cout << "\n";
    }

    return 0;
}
