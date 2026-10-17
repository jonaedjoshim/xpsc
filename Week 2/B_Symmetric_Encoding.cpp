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

        string b;
        cin >> b;

        map<char, int> check;

        for (int i = 0; i < n; i++)
        {
            check[b[i]] = 1;
        }

        string r = "";

        for (auto it : check)
        {
            r += it.first;
        }

        map<char, char> mp;

        int len = r.length();

        for (int i = 0; i < len; i++)
        {
            mp[r[i]] = r[len - 1 - i];
        }

        string result = "";

        for (int i = 0; i < n; i++)
        {
            result += mp[b[i]];
        }

        cout << result << endl;
    }

    return 0;
}