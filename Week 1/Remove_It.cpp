#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val != x)
        {
            result.push_back(val);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;

    return 0;
}