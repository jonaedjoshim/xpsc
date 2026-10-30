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
        long long min_val = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min_val)
            {
                min_val = a[i];
            }
        }

        int count_min = 0;
        long long g = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == min_val)
            {
                count_min++;
            }
            else if (a[i] % min_val == 0)
            {
                g = __gcd(g, a[i]);
            }
        }

        if (count_min >= 2 || g == min_val)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}