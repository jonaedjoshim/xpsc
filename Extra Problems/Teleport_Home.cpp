#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, t;
    cin >> d >> t;
    if (t >= d)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << d - t << endl;
    }
    return 0;
}