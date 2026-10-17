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

        sort(a.begin(), a.end());

        int ans = 0;

        for (int i = 0; i < n; )
        {
            int j = i;

            while (j < n && a[j] == a[i])
            {
                j++;
            }

            int cnt = j - i;

            if (i == 0 || a[i] != a[i - 1] + 1)
            {
                ans += cnt;
            }
            else
            {
                int prev = i - 1;
                int k = prev;

                while (k >= 0 && a[k] == a[i - 1])
                {
                    k--;
                }

                int prev_cnt = prev - k;

                if (cnt > prev_cnt)
                {
                    ans += cnt - prev_cnt;
                }
            }

            i = j;
        }

        cout << ans << endl;
    }

    return 0;
}