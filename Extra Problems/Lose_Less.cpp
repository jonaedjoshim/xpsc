#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int M, N;
        cin >> M >> N;

        int ans = M;

        for (int win = 0; win <= M; win++)
        {
            for (int tie = 0; tie <= M - win; tie++)
            {
                if (win * 3 + tie == N)
                {
                    int loss = M - win - tie;
                    ans = min(ans, loss);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}