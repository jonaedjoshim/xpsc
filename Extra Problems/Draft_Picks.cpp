#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> deck(n + 1, 0);

        int card = k;
        int player = 1;
        int direction = 1;

        while (card > 0)
        {
            deck[player] += card;
            card--;

            if (direction == 1)
            {
                player++;
                if (player > n)
                {
                    player = n;
                    direction = -1;
                }
            }
            else
            {
                player--;
                if (player < 1)
                {
                    player = 1;
                    direction = 1;
                }
            }
        }

        long long ans = 0;

        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, deck[i]);
        }

        cout << ans << endl;
    }

    return 0;
}