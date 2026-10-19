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
        string s;
        cin >> n >> s;

        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
        }

        int best = ans;

        for (int i = 1; i < n - 1; i++)
        {
            int cur = ans;

            if (s[i] != s[i - 1])
            {
                cur--;
            }

            if (s[i] != s[i + 1])
            {
                cur--;
            }

            if (s[i - 1] != s[i + 1])
            {
                cur++;
            }

            best = min(best, cur);
        }

        cout << best << '\n';
    }

    return 0;
}