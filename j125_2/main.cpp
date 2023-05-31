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

int xx[4] = {0, 1, 0, -1};
int yy[4] = {1, 0, -1, 0};

int n;
bool yes(int i, int j) {return i >= 0 && i < n && j >= 0 && j < n;}

void solve()
{
    cin >> n;
    int mp[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mp[i][j];
        }
    }

    int ll = 0, rr = 1e6 + 5;
    int ans = 0;
    while(rr > ll) {
        int now = (rr + ll) / 2;
        // cerr << rr << ' ' << ll << ' ' << now << '\n';
        int vis[n][n];
        int dis[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                vis[i][j] = 0;
                dis[i][j] = 0;
            }
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = 1;
        while(!q.empty()) {
            pair<int, int> th = q.front();
            // cerr << th.first << ' ' << th.second << '\n';
            q.pop();
            for(int i = 0; i < 4; i++) {
                // cerr << th.first + xx[i] << ' ' << th.second + yy[i] << '\n';
                if(yes(th.first + xx[i], th.second + yy[i])) {
                    if(vis[th.first + xx[i]][th.second + yy[i]] == 0 && abs(mp[th.first][th.second] - mp[th.first + xx[i]][th.second + yy[i]]) <= now) {
                        vis[th.first + xx[i]][th.second + yy[i]] = 1;
                        dis[th.first + xx[i]][th.second + yy[i]] = dis[th.first][th.second] + 1;
                        q.push({th.first + xx[i], th.second + yy[i]});
                    }
                }
            }
        }
        if(vis[n - 1][n - 1] == 1) {
            rr = now;
        }
        else {
            ll = now + 1;
        }
        ans = dis[n - 1][n - 1];
    }
    int vis[n][n];
    int dis[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            vis[i][j] = 0;
            dis[i][j] = 0;
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    vis[0][0] = 1;
    while(!q.empty()) {
        pair<int, int> th = q.front();
        // cerr << th.first << ' ' << th.second << '\n';
        q.pop();
        for(int i = 0; i < 4; i++) {
            // cerr << th.first + xx[i] << ' ' << th.second + yy[i] << '\n';
            if(yes(th.first + xx[i], th.second + yy[i])) {
                if(vis[th.first + xx[i]][th.second + yy[i]] == 0 && abs(mp[th.first][th.second] - mp[th.first + xx[i]][th.second + yy[i]]) <= ll) {
                    vis[th.first + xx[i]][th.second + yy[i]] = 1;
                    dis[th.first + xx[i]][th.second + yy[i]] = dis[th.first][th.second] + 1;
                    q.push({th.first + xx[i], th.second + yy[i]});
                }
            }
        }
    }
    cout << ll << '\n' << dis[n - 1][n - 1] << '\n';
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
