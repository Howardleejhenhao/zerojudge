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

using namespace std;

void solve()
{
    int x, y, l, r;
    cin >> x >> y >> l >> r;
    int n;
    cin >> n;
    int ans = 0;
    while(n--)
    {
        int xx, yy, ll;
        cin >> xx >> yy >> ll;
        if(ll > l) continue;
        if(abs(xx - x) * abs(xx - x) + abs(yy - y) * abs(yy - y) <= r * r) ans++;
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
