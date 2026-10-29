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
        long long a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            long long x = a;
            long long y = a * b;
            long long z = a * (b + 1);
            
            cout << x << " " << y << " " << z << '\n';
        }
    }

    return 0;
}