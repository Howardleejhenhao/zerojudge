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

int mp[50][50][50];
int visit[50][50][50];
int a, b, c;

void solve()
{
    while(cin >> a >> b >> c && a && b && c)
    {
        memset(mp, 0, sizeof(mp));
        memset(visit, 0, sizeof(visit));
        int sx, sy, sz, fx, fy, fz;
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                string s;
                cin >> s;
                for(int k = 0; k < c; k++)
                {
                    if(s[k] == 'S')
                    {
                        sx = k;
                        sy = j;
                        sz = i;
                        mp[i][j][k] = 1;
                    }
                    else if(s[k] == 'E')
                    {
                        fx = k;
                        fy = j;
                        fz = i;
                        mp[i][j][k] = 1;
                    }
                    else
                    {
                        mp[i][j][k] = (s[k] == '.' ? 1 : 0);
                    }
                }
            }
        }
        int go[6][3] = {{1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1}};
        int ans = 0;
        visit[sz][sy][sx] = 1;
        queue<vector<int>(3)> q;

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
