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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(k);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());

        long long pay = 0;
        int idx = 0;

        for (int i = 0; i < k; i++)
        {
            if (idx + b[i] > n)
            {
                break;
            }
            int skip = idx + b[i] - 1;
            for (int j = idx; j <= skip; j++)
            {
                if (j != skip)
                {
                    pay = pay + a[j];
                }
            }
            idx = idx + b[i];
        }

        for (int j = idx; j < n; j++)
        {
            pay = pay + a[j];
        }

        cout << pay << '\n';
    }

    return 0;
}