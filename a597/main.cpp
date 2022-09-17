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

void solve()
{
    int n, m;
    cin >> n >> m;
    int mp[n][m];
    int visit[n][m];
    memset(mp, 0, sizeof(mp));
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            mp[i][j] = (s[j] == 'J');
        }
    }
    int a = 0, b = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(mp[i][j] == 1 && visit[i][j] == 0)
            {
                a++;
                visit[i][j] = 1;
                queue<pair<int, int>> q;
                q.push({i, j});
                int cnt = 1;
                while(!q.empty())
                {
                    auto now = q.front();
                    //cout << now.first << ' ' << now.second << '\n';
                    q.pop();
                    for(int i = 0; i < 4; i++)
                    {
                        if(now.first + dx[i] >= 0 && now.first + dx[i] < n && now.second + dy[i] >= 0 && now.second + dy[i] < m)
                        {
                            if(mp[now.first + dx[i]][now.second + dy[i]] == 1 && visit[now.first + dx[i]][now.second + dy[i]] == 0)
                            {
                                cnt++;
                                visit[now.first + dx[i]][now.second + dy[i]] = 1;
                                q.push({now.first + dx[i], now.second + dy[i]});
                            }
                        }
                    }
                }
                b = max(b, cnt);
            }
        }
    }
    cout << a << ' ' << b << '\n';
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
