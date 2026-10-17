#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<long long, long long> freq;
    freq[0] = 1;

    long long sum = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        long long need = sum - x;

        if (freq.find(need) != freq.end())
        {
            ans += freq[need];
        }

        freq[sum]++;
    }

    cout << ans << endl;

    return 0;
}