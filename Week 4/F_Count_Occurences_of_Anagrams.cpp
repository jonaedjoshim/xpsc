#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(string &pat, string &txt)
    {
        int n = txt.size();
        int m = pat.size();

        if (m > n)
        {
            return 0;
        }

        vector<int> patFreq(26, 0);
        vector<int> winFreq(26, 0);

        for (int i = 0; i < m; i++)
        {
            patFreq[pat[i] - 'a']++;
            winFreq[txt[i] - 'a']++;
        }

        int ans = 0;

        if (patFreq == winFreq)
        {
            ans++;
        }

        for (int i = m; i < n; i++)
        {
            winFreq[txt[i] - 'a']++;
            winFreq[txt[i - m] - 'a']--;

            if (patFreq == winFreq)
            {
                ans++;
            }
        }

        return ans;
    }
};