#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int max_sum = 0;
        int current_sum = 0;

        for (int i = 1; i < l; i++)
        {
            current_sum += a[i];
        }
        max_sum = current_sum;

        current_sum = 0;

        for (int i = r + 1; i <= n; i++)
        {
            current_sum += a[i];
        }
        max_sum = max(max_sum, current_sum);

        cout << max_sum << endl;
    }

    return 0;
}