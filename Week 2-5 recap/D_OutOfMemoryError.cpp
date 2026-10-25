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
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> start(n), current(n);
        for (int i = 0; i < n; i++)
        {
            cin >> start[i];
            current[i] = start[i];
        }

        vector<int> changed;
        for (int i = 0; i < m; i++)
        {
            int idx;
            long long value;
            cin >> idx >> value;
            idx--;
            current[idx] += value;
            changed.push_back(idx);
            if (current[idx] > h)
            {
                for (int id : changed)
                {
                    current[id] = start[id];
                }
                changed.clear();
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << current[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}