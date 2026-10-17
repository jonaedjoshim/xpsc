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
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        if (total < s)
        {
            cout << -1 << '\n';
            continue;
        }

        if (total == s)
        {
            cout << 0 << '\n';
            continue;
        }

        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        vector<int> first_pos(total + 1, -1);
        for (int i = 0; i <= n; i++)
        {
            if (first_pos[pref[i]] == -1)
            {
                first_pos[pref[i]] = i;
            }
        }

        int max_len = 0;
        for (int r = 1; r <= n; r++)
        {
            int target = pref[r] - s;
            if (target >= 0 && first_pos[target] != -1)
            {
                int len = r - first_pos[target];
                if (len > max_len)
                {
                    max_len = len;
                }
            }
        }

        cout << n - max_len << '\n';
    }

    return 0;
}