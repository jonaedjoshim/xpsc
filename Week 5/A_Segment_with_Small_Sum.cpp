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
    int right = 0;
    int ans = 0;
    long long sum = 0;

    while (right < n)
    {
        sum += a[right];

        while (sum > s)
        {
            sum -= a[left];
            left++;
        }

        int len = right - left + 1;
        if (len > ans)
        {
            ans = len;
        }

        right++;
    }

    cout << ans << '\n';

    return 0;
}