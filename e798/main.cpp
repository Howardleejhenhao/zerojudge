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

void solve()
{
    int n;
    cin >> n;
    ll mp[n + 1][n + 1];
    ll ans[n / 2 + 1][n / 2 + 1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> mp[i][j];
        }
    }
    for(int i = 1; i <= n / 2; i++)
    {
        for(int j = 1; j <= n / 2; j++)
        {
            ll a, b, c, d;
            a = mp[i * 2 - 1][j * 2 - 1];
            b = mp[i * 2 - 1][j * 2];
            c = mp[i * 2][j * 2 - 1];
            d = mp[i * 2][j * 2];
            ans[i][j] = max({a, b, c, d});
        }
    }
    for(int i = 1; i <= n / 2; i++)
    {
        for(int j = 1; j <= n / 2; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
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
