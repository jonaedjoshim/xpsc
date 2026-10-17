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

        vector<int> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        sort(w.begin(), w.end());

        int ans = 0;

        for (int s = 2; s <= 2 * n; s++)
        {
            int i = 0;
            int j = n - 1;
            int cnt = 0;

            while (i < j)
            {
                int sum = w[i] + w[j];

                if (sum == s)
                {
                    cnt++;
                    i++;
                    j--;
                }
                else if (sum < s)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }

            if (cnt > ans)
            {
                ans = cnt;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}