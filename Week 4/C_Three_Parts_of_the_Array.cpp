#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum1 = a[0];
    long long sum3 = a[n - 1];
    long long ans = 0;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (sum1 == sum3)
        {
            ans = sum1;
            i++;
            sum1 += a[i];
        }
        else if (sum1 < sum3)
        {
            i++;
            sum1 += a[i];
        }
        else
        {
            j--;
            sum3 += a[j];
        }
    }

    cout << ans << endl;

    return 0;
}