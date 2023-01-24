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
int n, m, x, y, z;
const int N = 510;
int mp[N][N];
int visit[N][N];
int xx[4] = {0, 1, 0, -1};
int yy[4] = {1, 0, -1, 0};

bool ok(int i, int j, int last) {return i >= 1 && i <= n && j >= 1 && j <= m && visit[i][j] == 0 && mp[i][j] == last;}

void solve()
{
    cin >> n >> m >> x >> y >> z;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    queue<pair<int, int>> q;
    q.push({x, y});
    visit[x][y] = 1;
    int last = mp[x][y];
    mp[x][y] = z;
    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            if(!ok(now.first + xx[i], now.second + yy[i], last)) continue;
            mp[now.first + xx[i]][now.second + yy[i]] = z;
            visit[now.first + xx[i]][now.second + yy[i]] = 1;
            q.push({now.first + xx[i], now.second + yy[i]});
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << mp[i][j] << ' ';
        }
        cout << '\n';
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
