#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int count = 0;
    int time = a;

    while (time * 2 <= t * 2 + 1)
    {
        count++;
        time += a;
    }

    cout << count * b << endl;

    return 0;
}