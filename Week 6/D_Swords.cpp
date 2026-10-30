#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    long long max_val = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }

    long long g = 0;
    long long sum_diff = 0;

    for (int i = 0; i < n; i++)
    {
        long long diff = max_val - a[i];
        sum_diff += diff;
        g = __gcd(g, diff);
    }

    long long y = sum_diff / g;
    long long z = g;

    cout << y << " " << z << '\n';

    return 0;
}