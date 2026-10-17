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

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        string s;
        cin >> s;

        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }

        vector<int> lefts;
        vector<int> rights;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                lefts.push_back(i + 1);
            }
            else
            {
                rights.push_back(i + 1);
            }
        }

        long long ans = 0;
        int i = 0;
        int j = rights.size() - 1;

        while (i < lefts.size() && j >= 0 && lefts[i] < rights[j])
        {
            int l = lefts[i];
            int r = rights[j];
            ans += pref[r] - pref[l - 1];
            i++;
            j--;
        }

        cout << ans << endl;
    }

    return 0;
}