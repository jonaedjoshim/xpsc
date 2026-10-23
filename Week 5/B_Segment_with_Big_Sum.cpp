#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0;
    int ans = n + 1;
    long long sum = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];

        while (sum >= s && left <= right)
        {
            int len = right - left + 1;
            if (len < ans)
            {
                ans = len;
            }

            sum -= a[left];
            left++;
        }
    }

    if (ans == n + 1)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans << '\n';
    }

    return 0;
}