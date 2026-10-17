#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int count = mp[s];
            string new_name = s + to_string(count);

            while (mp.find(new_name) != mp.end())
            {
                count++;
                new_name = s + to_string(count);
            }

            mp[s] = count + 1;
            mp[new_name] = 1;
            cout << new_name << endl;
        }
    }

    return 0;
}