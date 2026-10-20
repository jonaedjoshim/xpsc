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
        vector<int> arr(n);
        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }

        int best_len = 0;
        int ans_left = -1, ans_right = -1;

        int i = 0;
        while (i < n)
        {
            if (cnt[arr[i]] == 1)
            {
                int j = i;
                while (j + 1 < n && cnt[arr[j + 1]] == 1)
                {
                    j++;
                }

                if (j - i + 1 > best_len)
                {
                    best_len = j - i + 1;
                    ans_left = i + 1;
                    ans_right = j + 1;
                }

                i = j + 1;
            }
            else
            {
                i++;
            }
        }

        if (best_len == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << ans_left << " " << ans_right << '\n';
        }
    }

    return 0;
}