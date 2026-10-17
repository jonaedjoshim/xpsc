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

    int i = 0, j = 0;
    int first = 1;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (!first)
            {
                cout << " ";
            }
            cout << a[i];
            i++;
        }
        else
        {
            if (!first)
            {
                cout << " ";
            }
            cout << b[j];
            j++;
        }
        first = 0;
    }

    while (i < n)
    {
        if (!first)
        {
            cout << " ";
        }
        cout << a[i];
        i++;
        first = 0;
    }

    while (j < m)
    {
        if (!first)
        {
            cout << " ";
        }
        cout << b[j];
        j++;
        first = 0;
    }

    cout << endl;

    return 0;
}