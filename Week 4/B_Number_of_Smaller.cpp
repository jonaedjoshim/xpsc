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

    int j = 0;

    for (int i = 0; i < m; i++)
    {
        while (j < n && a[j] < b[i])
        {
            j++;
        }

        cout << j;

        if (i < m - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}