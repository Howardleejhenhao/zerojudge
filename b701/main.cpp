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
int ans = 0;
int p;
int mp[150][150];
bool visit[150][150] = {false};
int s[150][150];
int W, N, E, S;


void dfs(int x, int y)
{
    if(visit[x][y]) return;
    N = min(y, N);
    S = max(y, S);
    W = min(x, W);
    E = max(x, E);
    visit[x][y] = 1;
    p += mp[x][y];
    if(x > 0 && visit[x - 1][y] == 0 && mp[x - 1][y] > 0)
    {
        s[x - 1][y] = s[x][y] + mp[x - 1][y];
        dfs(x - 1, y);
    }
    if(x < n - 1 && visit[x + 1][y] == 0 && mp[x + 1][y] > 0)
    {
        s[x + 1][y] = s[x][y] + mp[x + 1][y];
        dfs(x + 1, y);
    }
    if(y > 0 && visit[x][y - 1] == 0 && mp[x][y - 1] > 0)
    {
        s[x][y - 1] = s[x][y] + mp[x][y - 1];
        dfs(x, y - 1);
    }
    if(y < m - 1 && visit[x][y + 1] == 0 && mp[x][y + 1] > 0)
    {
        s[x][y + 1] = s[x][y] + mp[x][y + 1];
        dfs(x, y + 1);
    }

}

void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> mp[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(visit[i][j]) continue;
            if(mp[i][j] > 0)
            {
                s[i][j] = mp[i][j];
                cnt++;
                p = 0;
                N = 1000;
                E = -1;
                W = 1000;
                S = -1;
                dfs(i, j);
                cout << N << ' ' << W << ' ' << S << ' ' << E << ' ';
                cout << p << '\n';
            }
        }
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
