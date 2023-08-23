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
#define int long long

using namespace std;

void solve()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    pair<int, int> ab = {c - a, d - b};
    pair<int, int> ac = {e - a, f - b};
    int now = ab.first * ac.second - ab.second * ac.first;
    now = abs(now);
    cout << now << '\n';
    return;
}

signed main()
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
