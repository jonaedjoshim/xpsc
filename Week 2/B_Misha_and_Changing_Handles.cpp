#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string> ans, has;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        if (has.find(a) != has.end())
        {
            string s = has[a];

            has.erase(a);
            has[b] = s;

            ans.erase(a);
            ans[b] = s;
        }
        else
        {
            ans[b] = a;
            has[b] = a;
        }
    }

    cout << ans.size() << endl;

    for (auto [x, y] : ans)
    {
        cout << y << " " << x << endl;
    }

    return 0;
}