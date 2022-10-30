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

/*
此題要注意的是
遞迴時要分成要用或著是不要用
並且用回朔法解
cnt代表的是現在數到幾個可以配對的東西
*/

int mp[10][10];
int visit[10][10];
int ans;
int n, m;
int gox[4] = {0, 1, 0, -1};
int goy[4] = {1, 0, -1, 0};

void dfs(int x, int y, int cnt)
{
    if(x == n && y == m) {
        ans = max(ans, cnt);
        return;
    }
    int newx, newy;
    if(y == m) {
        newy = 1;
        newx = x + 1;
    }
    else {
        newy = y + 1;
        newx = x;
    }
    dfs(newx, newy, cnt); // 表示這格不用繼續遞迴
    if(visit[x][y]) return; // 表示這一格已經用過，不可繼續遞迴
    // 接下來會有兩組case分別是向右和向下
    // 要注意的是當前的點可不可以配到而不是新要遞迴的點
    // 向下
    if(y + 1 <= m) {
        if(mp[x][y + 1] == mp[x][y] && !visit[x][y + 1]) {
            visit[x][y] = 1;
            visit[x][y + 1] = 1;
            dfs(x, y, cnt + 1);
            visit[x][y] = 0;
            visit[x][y + 1] = 0;
        }
    }
    // 向右
    if(x + 1 <= n) {
        if(mp[x + 1][y] == mp[x][y] && !visit[x + 1][y]) {
            visit[x][y] = 1;
            visit[x + 1][y] = 1;
            dfs(x, y, cnt + 1);
            visit[x][y] = 0;
            visit[x + 1][y] = 0;
        }
    }
}

void solve()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    dfs(1, 1, 0);
    cout << ans << '\n';
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
