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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);

        for (int i = 0; i < m; i++)
        {
            cin >> ind[i];
        }

        string c;
        cin >> c;

        sort(ind.begin(), ind.end());
        sort(c.begin(), c.end());

        ind.erase(unique(ind.begin(), ind.end()), ind.end());

        for (int i = 0; i < (int)ind.size(); i++)
        {
            s[ind[i] - 1] = c[i];
        }

        cout << s << endl;
    }

    return 0;
}