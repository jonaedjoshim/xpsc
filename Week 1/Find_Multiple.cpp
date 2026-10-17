#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c;
    cin >> c;
    for (int i = a; i <= b; i++)
    {

        if (i % c == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}