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
vector<int> ed[(int)2e5 + 100];
vector<int> cost((int)2e5 + 100);
vector<int> edcost((int)2e5 + 100);
vector<bool> vis((int)2e5 + 100);
void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> cost[i];
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        ed[b].push_back(a);
        ed[a].push_back(b);
        edcost[a] += cost[b];
        edcost[b] += cost[a];
    }
    int ans = LONG_MIN;
    priority_queue<pair<int, int> , vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(int i = 1; i <= n; i++) pq.push({edcost[i], i});
    while(!pq.empty())
    {
        int now = pq.top().second;
        pq.pop();
        if(!vis[now])
        {
            ans = max(ans, edcost[now]);
            vis[now] = 1;
            for(int i : ed[now])
            {
                if(vis[i] == 0)
                {
                    edcost[i] -= cost[now];
                    pq.push({edcost[i], i});
                }
            }
        }
    }
    cout << ans << '\n';
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
