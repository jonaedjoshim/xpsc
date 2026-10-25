#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int pos[200005];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pos[x] = i;
        }

        int flag = 1;
        int prev = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (pos[x] < prev)
            {
                flag = 0;
            }

            prev = pos[x];
        }

        if (flag == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}