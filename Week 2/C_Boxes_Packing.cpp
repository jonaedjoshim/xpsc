#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    int answer = 0;

    for (auto it : freq)
    {
        if (it.second > answer)
        {
            answer = it.second;
        }
    }

    cout << answer << endl;

    return 0;
}