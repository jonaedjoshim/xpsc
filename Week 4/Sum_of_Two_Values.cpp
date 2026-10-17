#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    map<long long, vector<int>> pos;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]].push_back(i + 1);
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        long long need = x - a[i];

        if (need == a[i])
        {
            if (pos[need].size() >= 2)
            {
                cout << pos[need][0] << " " << pos[need][1] << endl;
                flag = 1;
                break;
            }
        }
        else
        {
            if (pos.find(need) != pos.end())
            {
                cout << i + 1 << " " << pos[need][0] << endl;
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}