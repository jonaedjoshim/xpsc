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
        string row0, row1;
        cin >> row0 >> row1;

        int answer = 0;

        for (int i = 1; i < n - 1; i++)
        {
            bool top_free = (row0[i - 1] == '.' && row0[i] == '.' && row0[i + 1] == '.');
            bool bottom_pattern = (row1[i - 1] == 'x' && row1[i] == '.' && row1[i + 1] == 'x');

            if (top_free && bottom_pattern)
            {
                answer++;
            }

            bool bottom_free = (row1[i - 1] == '.' && row1[i] == '.' && row1[i + 1] == '.');
            bool top_pattern = (row0[i - 1] == 'x' && row0[i] == '.' && row0[i + 1] == 'x');

            if (bottom_free && top_pattern)
            {
                answer++;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}