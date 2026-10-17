#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;

    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0, right = 0;
    long long sum = 0, ans = 0;

    while (right < n)
    {
        sum += a[right];

        if (sum <= k)
        {
            ans += (right - left + 1);
        }
        else
        {
            while (sum > k && left <= right)
            {
                sum -= a[left];
                left++;
            }
            if (sum <= k)
            {
                ans += (right - left + 1);
            }
        }
        right++;
    }
    cout << ans << endl;

    return 0;
}