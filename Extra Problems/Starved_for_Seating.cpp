#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int fans = 0;

                for (int x = 0; x < n; x++)
                {
                    if (x == i || x == j)
                        fans += a[x];
                    else
                        fans += a[x] / 2;
                }

                if (fans > k)
                    ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}