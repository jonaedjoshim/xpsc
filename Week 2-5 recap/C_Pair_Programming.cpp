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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }

        vector<int> ans;
        int lines = k;
        int i = 0;
        int j = 0;
        int stuck = 0;

        while (i < n || j < m)
        {
            int moved = 0;

            if (i < n && a[i] == 0)
            {
                ans.push_back(0);
                lines++;
                i++;
                moved = 1;
            }
            else if (i < n && a[i] <= lines)
            {
                ans.push_back(a[i]);
                i++;
                moved = 1;
            }

            if (j < m && b[j] == 0)
            {
                ans.push_back(0);
                lines++;
                j++;
                moved = 1;
            }
            else if (j < m && b[j] <= lines)
            {
                ans.push_back(b[j]);
                j++;
                moved = 1;
            }

            if (moved == 0)
            {
                stuck = 1;
                break;
            }
        }

        if (stuck == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int x = 0; x < (int)ans.size(); x++)
            {
                if (x > 0)
                {
                    cout << ' ';
                }
                cout << ans[x];
            }
            cout << '\n';
        }
    }

    return 0;
}