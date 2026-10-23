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
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string str;
        cin >> str;

        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + a[i];
        }

        long long score = 0;
        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            while (left < right && str[left] != 'L')
            {
                left++;
            }
            while (left < right && str[right] != 'R')
            {
                right--;
            }

            if (left < right)
            {
                score += pref[right + 1] - pref[left];
                left++;
                right--;
            }
        }

        cout << score << '\n';
    }

    return 0;
}