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
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        int flag = 1;

        while (i < (int)p.size() && j < (int)s.size())
        {
            if (p[i] != s[j])
            {
                flag = 0;
                break;
            }

            char c = p[i];
            int cp = 0, cs = 0;

            while (i < (int)p.size() && p[i] == c)
            {
                cp++;
                i++;
            }

            while (j < (int)s.size() && s[j] == c)
            {
                cs++;
                j++;
            }

            if (cs < cp || cs > 2 * cp)
            {
                flag = 0;
                break;
            }
        }

        if (i != (int)p.size() || j != (int)s.size())
        {
            flag = 0;
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}