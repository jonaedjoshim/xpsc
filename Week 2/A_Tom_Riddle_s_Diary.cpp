#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp.find(s) != mp.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            mp[s] = 1;
        }
    }

    return 0;
}