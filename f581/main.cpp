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
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    vector<int> pre(2 * n, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pre[0] = v[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }
    for(int i = 0; i < n; i++) {
        pre[i + n] = pre[i + n - 1] + v[i];
    }
    int index = 0;
    for(int i = 0; i < m; i++) {
        int now;
        cin >> now;
        if(index == 0) now += pre[n - 1];
        else now += pre[index - 1];
        index = lower_bound(pre.begin(), pre.end(), now) - pre.begin() + 1;
        index %= n;
    }
    cout << index << '\n';

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
