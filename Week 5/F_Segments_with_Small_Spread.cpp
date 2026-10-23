#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<long long> window;
    long long total = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        window.insert(a[right]);

        while (*window.rbegin() - *window.begin() > k)
        {
            auto it = window.find(a[left]);
            window.erase(it);
            left++;
        }

        total += (long long)(right - left + 1);
    }

    cout << total << '\n';

    return 0;
}