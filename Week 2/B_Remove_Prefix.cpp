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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, int> seen;
        int answer = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (seen.find(a[i]) != seen.end())
            {
                answer = i + 1;
                break;
            }
            seen[a[i]] = 1;
        }

        cout << answer << endl;
    }

    return 0;
}