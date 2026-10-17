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
        string s;
        cin >> s;

        vector<int> lower_pos, upper_pos;
        vector<bool> keep(s.length(), true);

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b')
            {
                keep[i] = false;

                if (!lower_pos.empty())
                {
                    keep[lower_pos.back()] = false;
                    lower_pos.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                keep[i] = false;

                if (!upper_pos.empty())
                {
                    keep[upper_pos.back()] = false;
                    upper_pos.pop_back();
                }
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower_pos.push_back(i);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                upper_pos.push_back(i);
            }
        }

        string result = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (keep[i])
            {
                result += s[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}