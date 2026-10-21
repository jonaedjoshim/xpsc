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

        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            if (b.empty() || b.back() != a[i])
            {
                b.push_back(a[i]);
            }
        }

        int size = b.size();
        int total = 0;

        for (int i = 0; i < size; i++)
        {
            int left_ok = 1;
            int right_ok = 1;

            if (i > 0 && b[i - 1] <= b[i])
            {
                left_ok = 0;
            }

            if (i < size - 1 && b[i + 1] <= b[i])
            {
                right_ok = 0;
            }

            if (left_ok == 1 && right_ok == 1)
            {
                total = total + 1;
            }
        }

        if (total == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}