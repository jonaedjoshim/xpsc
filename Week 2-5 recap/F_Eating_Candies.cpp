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

        vector<long long> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        int left = 0;
        int right = n - 1;
        long long sum_left = 0;
        long long sum_right = 0;
        int ans = 0;

        while (left <= right)
        {
            if (sum_left <= sum_right)
            {
                sum_left += w[left];
                left++;
            }
            else
            {
                sum_right += w[right];
                right--;
            }

            if (sum_left == sum_right)
            {
                int total = left + (n - 1 - right);
                if (total > ans)
                {
                    ans = total;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}