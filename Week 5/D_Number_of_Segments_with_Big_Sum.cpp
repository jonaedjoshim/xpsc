#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0;
    long long sum = 0;
    long long total = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];

        while (sum >= s && left <= right)
        {
            sum -= a[left];
            left++;
        }

        total += left;
    }

    cout << total << '\n';

    return 0;
}