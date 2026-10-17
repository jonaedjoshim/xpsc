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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;

            string move;
            cin >> move;

            int diff = 0;

            for (int j = 0; j < b; j++)
            {
                if (move[j] == 'U')
                {
                    diff--;
                }
                else
                {
                    diff++;
                }
            }

            a[i] = (a[i] + diff) % 10;

            if (a[i] < 0)
            {
                a[i] += 10;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}