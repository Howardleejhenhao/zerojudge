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

vector<pair<int, int>> ed[510];
int visit[510];
void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n; i++) visit[i] = 1000000000;
    while(m--) {
        int a, b, c;
        cin >> a >> b >> c;
        ed[a].push_back({b, c});
        ed[b].push_back({a, c});
    }
    int ss, ee;
    cin >> ss >> ee;
    queue<int> q;
    q.push(ss);
    visit[ss] = 0;

    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(auto i : ed[now]) {
            int ne = max(visit[now], i.second);
            if(ne < visit[i.first]) {
                visit[i.first] = ne;
                q.push(i.first);
            }
        }
    }
    if(visit[ee] == 1000000000) cout << "-1";
    else cout << visit[ee];
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
