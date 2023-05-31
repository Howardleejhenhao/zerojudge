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
const int N = 1020;
const int INF = 1e9 + 7;
int dp[N][N], dp2[N][N];
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    int ans = -INF;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i][j] = max(a[i] * b[j], dp[i - 1][j - 1] + a[i] * b[j]);
            ans = max(ans, dp[i][j]);
        }
    }
    reverse(a.begin() + 1, a.end());
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp2[i][j] = max(a[i] * b[j], dp2[i - 1][j - 1] + a[i] * b[j]);
            ans = max(ans, dp2[i][j]);
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
    while(t--)
    {
        solve();
    }
    return 0;
}
