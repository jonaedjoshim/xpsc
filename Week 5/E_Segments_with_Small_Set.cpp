#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> freq(100005, 0);
    int diff = 0;
    int left = 0;
    long long total = 0;

    for (int right = 0; right < n; right++)
    {
        int val = a[right];

        if (freq[val] == 0)
        {
            diff++;
        }
        freq[val]++;

        while (diff > k)
        {
            int lval = a[left];
            freq[lval]--;

            if (freq[lval] == 0)
            {
                diff--;
            }
            left++;
        }

        total += (long long)(right - left + 1);
    }

    cout << total << '\n';

    return 0;
}