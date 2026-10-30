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

        int max_index[1005];
        for (int i = 0; i <= 1000; i++)
        {
            max_index[i] = -1;
        }

        for (int i = 0; i < n; i++)
        {
            max_index[a[i]] = i + 1;
        }

        int ans = -1;

        for (int i = 1; i <= 1000; i++)
        {
            if (max_index[i] == -1)
            {
                continue;
            }

            for (int j = i; j <= 1000; j++)
            {
                if (max_index[j] == -1)
                {
                    continue;
                }

                if (__gcd(i, j) == 1)
                {
                    int current_sum = max_index[i] + max_index[j];
                    if (current_sum > ans)
                    {
                        ans = current_sum;
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}