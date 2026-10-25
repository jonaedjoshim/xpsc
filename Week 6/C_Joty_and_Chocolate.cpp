#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long cntA = n / a;
    long long cntB = n / b;

    long long g = __gcd(a, b);
    long long lcm = (a / g) * b;
    long long cntAB = n / lcm;

    long long ans;

    if (p >= q)
    {
        ans = cntA * p + (cntB - cntAB) * q;
    }
    else
    {
        ans = (cntA - cntAB) * p + cntB * q;
    }

    cout << ans << '\n';

    return 0;
}