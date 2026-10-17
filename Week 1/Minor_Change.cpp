#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int different_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            different_count++;
        }
    }

    cout << different_count << endl;

    return 0;
}