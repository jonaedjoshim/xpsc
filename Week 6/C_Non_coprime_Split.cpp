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
        int l, r;
        cin >> l >> r;

        int s = r;
        if (s % 2 != 0)
        {
            s--;
        }

        if (s >= l && s >= 4)
        {
            cout << s / 2 << " " << s / 2 << '\n';
            continue;
        }

        if (l == r)
        {
            int n = l;
            int p = -1;

            for (int d = 3; d * d <= n; d = d + 2)
            {
                if (n % d == 0)
                {
                    p = d;
                    break;
                }
            }

            if (n % 2 != 0 && p != -1)
            {
                cout << p << " " << n - p << '\n';
                continue;
            }
        }

        cout << -1 << '\n';
    }

    return 0;
}