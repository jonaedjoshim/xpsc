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
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }

        string ans = "";

        for (int turn = 0; turn < n; turn++)
        {
            int take_left;

            if (dq.size() == 1)
            {
                take_left = 1;
            }
            else if (turn % 2 == 0)
            {
                if (dq.front() < dq.back())
                {
                    take_left = 1;
                }
                else
                {
                    take_left = 0;
                }
            }
            else
            {
                if (dq.front() > dq.back())
                {
                    take_left = 1;
                }
                else
                {
                    take_left = 0;
                }
            }

            if (take_left)
            {
                ans += 'L';
                dq.pop_front();
            }
            else
            {
                ans += 'R';
                dq.pop_back();
            }
        }

        cout << ans << '\n';
    }

    return 0;
}