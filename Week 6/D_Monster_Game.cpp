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
        vector<long long> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end(), greater<long long>());

        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + b[i];
        }

        long long ans = 0;
        int j = 0;

        while (j < n)
        {
            int k = j;
            while (k < n && a[k] == a[j])
            {
                k++;
            }

            long long x = a[j];
            int count = k;

            int low = 0;
            int high = n;
            while (low < high)
            {
                int mid = (low + high + 1) / 2;
                if (pref[mid] <= count)
                {
                    low = mid;
                }
                else
                {
                    high = mid - 1;
                }
            }

            long long score = x * (long long)low;
            if (score > ans)
            {
                ans = score;
            }

            j = k;
        }

        cout << ans << '\n';
    }

    return 0;
}