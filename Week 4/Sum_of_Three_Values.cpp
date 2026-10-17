#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int flag = 0;

    for (int i = 0; i < n - 2; i++)
    {
        long long target = x - a[i].first;

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            long long sum = a[left].first + a[right].first;

            if (sum == target)
            {
                int p1 = a[i].second;
                int p2 = a[left].second;
                int p3 = a[right].second;

                if (p1 > p2)
                {
                    int temp = p1;
                    p1 = p2;
                    p2 = temp;
                }

                if (p2 > p3)
                {
                    int temp = p2;
                    p2 = p3;
                    p3 = temp;
                }

                if (p1 > p2)
                {
                    int temp = p1;
                    p1 = p2;
                    p2 = temp;
                }

                cout << p1 << " " << p2 << " " << p3 << endl;
                flag = 1;
                break;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}