#include <bits/stdc++.h>
using namespace std;

int is_prime(long long x)
{
    if (x < 2)
    {
        return 0;
    }

    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (is_prime(n))
    {
        cout << 1 << '\n';
    }
    else if (n % 2 == 0)
    {
        cout << 2 << '\n';
    }
    else if (is_prime(n - 2))
    {
        cout << 2 << '\n';
    }
    else
    {
        cout << 3 << '\n';
    }

    return 0;
}