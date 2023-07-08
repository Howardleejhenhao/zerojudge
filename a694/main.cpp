/*
|----|   |----|
|    |   |    |
|    ----|    |
|             |
|    ----|    |
|    |   |    |
|----|   |----|

*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 600;
ll per[2600][2600], perx[2600][2600], pery[2600][2600];
ll c[2600][2600];
void solve()
{
    int n, m;
    while(cin >> n >> m) {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> c[i][j];
                perx[i][j] = perx[i][j - 1] + c[i][j];
                pery[i][j] = pery[i - 1][j] + c[i][j];
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                per[i][j] = per[i - 1][j - 1] + perx[i][j] + pery[i][j] - c[i][j];
            }
        }
        while(m--)
        {
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            ll ans = per[x2][y2];
            ans -= per[x1 - 1][y2];
            ans -= per[x2][y1 - 1];
            ans += per[x1 - 1][y1 - 1];
            cout << ans << '\n';
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
