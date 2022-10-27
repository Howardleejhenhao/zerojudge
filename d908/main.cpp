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

vector<pair<int, int>> mp[30];

int ans;

void dfs(int x, int now)
{
    for(auto i : mp[x]) {
        ans = max(ans, now + i.second);
        dfs(i.first, now + i.second);
    }
}

void solve()
{
    char c;
    cin >> c;
    int n;
    cin >> n;
    while(n--) {
        char a, b;
        int c;
        cin >> a >> b >> c;
        mp[a - 'A'].push_back({b - 'A', c});
    }
    dfs(c - 'A', 0);
    cout << ans;
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
