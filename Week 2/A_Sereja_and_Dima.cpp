#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int ans1 = 0, ans2 = 0;
    int who = 1;

    while (!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx;

        if (left > right)
        {
            mx = left;
            dq.pop_front();
        }
        else
        {
            mx = right;
            dq.pop_back();
        }

        if (who % 2 != 0)
        {
            ans1 += mx;
        }
        else
        {
            ans2 += mx;
        }

        who++;
    }

    cout << ans1 << " " << ans2 << endl;

    return 0;
}
