#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        long long ans = 1;

        while (true)
        {
            long long gcd_a = __gcd(a, c);
            long long gcd_b = __gcd(b, c);

            if (gcd_a == gcd_b)
            {
                cout << ans << endl;
                break;
            }

            c++;
            ans++;
        }
    }

    return 0;
}