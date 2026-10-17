#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (row1[i] == 'R' && row2[i] != 'R')
            {
                flag = 0;
                break;
            }
            if (row2[i] == 'R' && row1[i] != 'R')
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}