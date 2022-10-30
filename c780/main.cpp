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
int n, m;
int visit[10][10];
int ans;

void dfs(int x, int y, int cnt)
{
    ans = max(ans, cnt);
    // cout << x << ' ' << y << ' ' << cnt << '\n';
    // 總共4個方向要走
    // 向下
    int now = 0;
    for(int i = x + 1; i <= n; i++) {
        if(!visit[i][y]) now++;
        if(now == 2) {
            visit[i][y] = 1;
            dfs(i, y, cnt + 1);
            visit[i][y] = 0;
            break;
        }
    }
    // 向上
    now = 0;
    for(int i = x - 1; i >= 1; i--) {
        if(!visit[i][y]) now++;
        if(now == 2) {
            visit[i][y] = 1;
            dfs(i, y, cnt + 1);
            visit[i][y] = 0;
            break;
        }
    }
    now = 0;
    // 向右
    for(int i = y + 1; i <= m; i++) {
        if(!visit[x][i]) now++;
        if(now == 2) {
            visit[x][i] = 1;
            dfs(x, i, cnt + 1);
            visit[x][i] = 0;
            break;
        }
    }
    now = 0;
    // 向左
    for(int i = y - 1; i >= 1; i--) {
        if(!visit[x][i]) now++;
        if(now == 2) {
            visit[x][i] = 1;
            dfs(x, i, cnt + 1);
            visit[x][i] = 0;
            break;
        }
    }
}

void solve()
{
    cin >> n >> m;
    visit[1][1] = 1;
    dfs(1, 1, 0);
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
