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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int run = 0;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                run++;
            }
            else
            {
                run = 0;
            }

            if (run >= k)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> p(n);
        int val = 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                p[i] = val++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                p[i] = val++;
            }
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << p[i];
            if (i < n - 1)
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}