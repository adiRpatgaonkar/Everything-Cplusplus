#include <iostream>
using namespace std;
int main()
{
    int num = 0; cin >> num; // No. of test cases.
    for (int z = 0; z < num; z++)
    {
        // n = no. of completed jobs, m = no. of To-Dos.
        int n = 0, m = 0; cin >> n >> m;
        int d = n - m; // Num of jobs to be completed
        if (d)
        {
            if (m)
            {
                int complete[m];
                for (int i = 0, y = 0; i < m; i++)
                {
                    cin >> complete[i]; // Input the completed jobs
                }
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
            else
            {
                for (int i = 0; i < d; i+=2)
                    cout << i + 1 << " ";
                cout << "\n";
                for (int i = 1; i < d; i+=2)
                    cout << i + 1 << " ";
                cout << "\n";
            }
        }
        else
            cout << "\n";
    }
    return 0;
}
