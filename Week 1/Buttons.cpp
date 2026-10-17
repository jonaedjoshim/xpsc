#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int p_one = max(a, b) + max(a, b) - 1;
    int p_two = a + b;
    int ans = max(p_one, p_two);
    cout << ans << endl;
    return 0;
}