#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long p)
{
    long long mod = 1000000007;
    long long result = 1;
    base = base % mod;

    while (p > 0)
    {
        if (p % 2 != 0)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        p = p / 2;
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        
        cout << power(a, b) << '\n';
    }

    return 0;
}