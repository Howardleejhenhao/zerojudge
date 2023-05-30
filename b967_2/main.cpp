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
const int N = 1e5 + 10;
vector<int> ed[N];
vector<bool> vis(N);
vector<int> d(N);

void init(int n)
{
    for(int i = 0; i <= n; i++) {
        ed[i].clear();
        vis[i] = 0;
        d[i] = 0;
    }
    return;
}
int ans = 0;
int dfs(int x)
{
    int b = 0, bb = 0;

    for(int i : ed[x]) {
        if(vis[i]) continue;
        // d[i] = d[x] + 1;
        int now = dfs(i) + 1;
        vis[i] = 1;
        if(now > b) {
            bb = b;
            b = now;
        }
        else if(now > bb) {
            bb = now;
        }
    }

    ans = max(ans, b + bb);
    return b;
}

void solve(int n)
{
    init(n);
    ans = 0;
    vector<bool> use(n + 1, 0);
    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        ed[a].push_back(b);
        use[b] = 1;
    }
    int root;
    for(int i = 0; i < n; i++) {
        if(use[i] == 0) {
            root = i;
            break;
        }
    }
    vis[root] = 1;
    dfs(root);
    cout << ans << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    // cin >> t;
    while(cin >> n)
    {
        solve(n);
    }
    return 0;
}
