#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    long long ans = 0;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            long long val = a[i];
            long long countA = 0, countB = 0;

            while (i < n && a[i] == val)
            {
                countA++;
                i++;
            }

            while (j < m && b[j] == val)
            {
                countB++;
                j++;
            }

            ans += countA * countB;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << ans << endl;

    return 0;
}