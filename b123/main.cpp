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

const int N = 210;
int mp[N][N];
int pre[N][N];
int dp[N][N];
void solve(int n, int m)
{
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            mp[i][j] = 0;
            pre[i][j] = 0;
            dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mp[i][j];
            if(mp[i][j] == 1) dp[i][j] = dp[i - 1][j] + mp[i][j];
            else dp[i][j] = 0;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int now = dp[i][j];
            for(int k = j; k <= m; k++) {
                now = min(now, dp[i][k]);
                ans = max(ans, now * (k - j + 1));
            }
        }
    }
    cout << ans << '\n';

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    int n, m;
    while(cin >> n >> m)
    {
        solve(n, m);
    }
    return 0;
}
