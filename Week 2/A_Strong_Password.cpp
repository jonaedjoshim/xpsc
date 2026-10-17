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

        int n = s.length();
        int max_time = 0;
        string best = "";

        for (int pos = 0; pos <= n; pos++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string temp = s.substr(0, pos) + c + s.substr(pos);

                int time = 2;

                for (int i = 1; i < temp.length(); i++)
                {
                    if (temp[i] == temp[i - 1])
                    {
                        time += 1;
                    }
                    else
                    {
                        time += 2;
                    }
                }

                if (time > max_time)
                {
                    max_time = time;
                    best = temp;
                }
            }
        }

        cout << best << endl;
    }

    return 0;
}