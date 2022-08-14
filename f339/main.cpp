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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int now = 0;

    for(int i = 0; i < m; i++)
    {
        if(v[i].first <= now)
        {
            now = v[i].second;
            continue;
        }
        cout << now << ' ' << v[i].first << '\n';
        now = v[i].second;
    }
    if(now < n)
    {
        cout << now << ' ' << n << '\n';
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
