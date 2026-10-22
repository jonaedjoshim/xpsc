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
        long long k;
        cin >> n >> k;

        vector<long long> a(n), h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int ans = 0;
        int left = 0;
        long long sum = 0;

        for (int right = 0; right < n; right++)
        {
            if (right > 0 && h[right - 1] % h[right] != 0)
            {
                left = right;
                sum = 0;
            }

            sum += a[right];

            while (sum > k && left <= right)
            {
                sum -= a[left];
                left++;
            }

            if (sum <= k && left <= right)
            {
                int len = right - left + 1;
                if (len > ans)
                {
                    ans = len;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
