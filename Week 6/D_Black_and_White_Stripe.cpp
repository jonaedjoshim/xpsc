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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int white = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
            {
                white++;
            }
        }

        int ans = white;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
            {
                white++;
            }
            if (s[i - k] == 'W')
            {
                white--;
            }

            if (white < ans)
            {
                ans = white;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}