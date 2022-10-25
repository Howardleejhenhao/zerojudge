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
// #define ll long long

using namespace std;

int mp[400][400];
int n;
int visit[400][400];
int gox[4] = {0, 1, 0, -1};
int goy[4] = {1, 0, -1, 0};
int ans[400][400];

bool f(int th)
{
    // cout << th << '\n';
    memset(visit, 0, sizeof(visit));
    queue<pair<int, int>> q;
    q.push({1, 1});
    visit[1][1] = 1;
    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            if(now.first + gox[i] >= 1 && now.first + gox[i] <= n && now.second + goy[i] >= 1 && now.second + goy[i] <= n) {
                if(abs(mp[now.first + gox[i]][now.second + goy[i]] - mp[now.first][now.second]) <= th && visit[now.first + gox[i]][now.second + goy[i]] == 0) {
                    // cout << i << '\n';
                    visit[now.first + gox[i]][now.second + goy[i]] = 1;
                    q.push({now.first + gox[i], now.second + goy[i]});
                }
            }
        }
    }

    return visit[n][n];
}

int bfs(int th)
{
    memset(visit, 0, sizeof(visit));
    queue<pair<int, int>> q;
    q.push({1, 1});
    visit[1][1] = 1;
    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            if(now.first + gox[i] >= 1 && now.first + gox[i] <= n && now.second + goy[i] >= 1 && now.second + goy[i] <= n) {
                if(abs(mp[now.first + gox[i]][now.second + goy[i]] - mp[now.first][now.second]) <= th && visit[now.first + gox[i]][now.second + goy[i]] == 0) {
                    visit[now.first + gox[i]][now.second + goy[i]] = 1;
                    ans[now.first + gox[i]][now.second + goy[i]] = ans[now.first][now.second] + 1;
                    q.push({now.first + gox[i], now.second + goy[i]});
                }
            }
        }
    }

    return ans[n][n];
}

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    int ll = 0, rr = 1e6 + 10;
    while(ll < rr) {
        // cerr << ll << ' ' << rr << '\n';
        int now = ll + (rr - ll) / 2;
        if(f(now)) {
            rr = now;
        }
        else {
            ll = now + 1;
        }
    }
    cout << ll << '\n';
    cout << bfs(ll) << '\n';
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
