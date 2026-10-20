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
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int operations = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            if (cnt == m)
            {
                operations++;
                i = min(i + k - 1, n - 1);
                cnt = 0;
            }
        }

        cout << operations << '\n';
    }

    return 0;
}