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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long g1 = 0;
        long long g2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                g1 = __gcd(g1, a[i]);
            }
            else
            {
                g2 = __gcd(g2, a[i]);
            }
        }

        long long ans = 0;

        int flag = 1;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag && g1 > 0)
        {
            ans = g1;
        }

        if (ans == 0)
        {
            flag = 1;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g2 == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag && g2 > 0)
            {
                ans = g2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}