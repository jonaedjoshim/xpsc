#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
            {
                count++;
            }
        }
        int result = (count + 1) / 2 + (n - count);
        cout << result << endl;
    }
    return 0;
}