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

        for (int i = 0; i < n; i++)
        {
            if (row0[i] == '.' && row1[i] == '.')
            {
                row0[i] = 'x';
                row1[i] = 'x';

                int left_connected = 0;
                int right_connected = 0;

                for (int j = 0; j < i; j++)
                {
                    if ((row0[j] == '.' && row0[j + 1] == '.') || (row1[j] == '.' && row1[j + 1] == '.') || (row0[j] == '.' && row1[j] == '.'))
                    {
                        left_connected = 1;
                        break;
                    }
                }

                for (int j = i + 1; j < n; j++)
                {
                    if ((row0[j] == '.' && row0[j + 1] == '.') || (row1[j] == '.' && row1[j + 1] == '.') || (row0[j] == '.' && row1[j] == '.'))
                    {
                        right_connected = 1;
                        break;
                    }
                }

                if (left_connected && right_connected)
                {
                    answer++;
                }

                row0[i] = '.';
                row1[i] = '.';
            }
        }

        cout << answer << '\n';
    }

    return 0;
}