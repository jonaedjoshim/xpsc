#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long mod = 1000000007;

    int t;
    cin >> t;

    vector<int> q(t);
    int max_n = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> q[i];
        if (q[i] < mod)
        {
            max_n = max(max_n, q[i]);
        }
    }

    vector<long long> fact(max_n + 1);
    fact[0] = 1;

    for (int i = 1; i <= max_n; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }

    for (int i = 0; i < t; i++)
    {
        if (q[i] >= mod)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << fact[q[i]] << '\n';
        }
    }

    return 0;
}