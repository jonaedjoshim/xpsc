#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        string result = "";

        for (int i = 0; i < min(n, m); i++)
        {
            if (a[i] == b[i])
            {
                result += a[i];
            }
            else
            {
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}