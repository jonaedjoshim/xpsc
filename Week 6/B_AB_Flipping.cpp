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

        int first_a = -1;
        int last_b = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && first_a == -1)
            {
                first_a = i;
            }
            if (s[i] == 'B')
            {
                last_b = i;
            }
        }

        int answer = 0;

        if (first_a != -1 && last_b != -1 && first_a < last_b)
        {
            answer = last_b - first_a;
        }

        cout << answer << '\n';
    }

    return 0;
}