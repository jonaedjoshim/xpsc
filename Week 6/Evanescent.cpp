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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> c, len;

        for (int i = 0; i < n;)
        {
            int j = i;

            while (j < n && a[j] == a[i])
            {
                j++;
            }

            c.push_back(a[i]);
            len.push_back(j - i);
            i = j;
        }

        int k = (int)c.size();
        int ans = k;

        for (int i = 0; i + 1 < k; i++)
        {
            if (len[i] >= 2 && len[i + 1] >= 2)
            {
                ans = max(ans, k + 2);
            }
            else if (len[i] >= 2)
            {
                if (i + 2 >= k || c[i + 2] != c[i])
                {
                    ans = max(ans, k + 1);
                }
            }
            else if (len[i + 1] >= 2)
            {
                if (i == 0 || c[i - 1] != c[i + 1])
                {
                    ans = max(ans, k + 1);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}