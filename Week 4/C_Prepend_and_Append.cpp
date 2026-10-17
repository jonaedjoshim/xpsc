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

        string s;
        cin >> s;

        int i = 0;
        int j = n - 1;

        while (i < j && s[i] != s[j])
        {
            i++;
            j--;
        }

        int ans = j - i + 1;
        cout << ans << endl;
    }

    return 0;
}