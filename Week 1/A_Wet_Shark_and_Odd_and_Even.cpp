#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    long long sm_odd = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;

        sum += val;

        if (val % 2 == 1 && val < sm_odd)
        {
            sm_odd = val;
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - sm_odd << endl;
    }

    return 0;
}