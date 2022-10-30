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

int mp[10][10];
int ans;
int n;
int visit[10][10];

int gox[4] = {0, 1, 0, -1};
int goy[4] = {1, 0, -1, 0};

bool check(int a, int b)
{
    if(a + b >= 1 && a + b <= n) return true;
    else return false;

}

void dfs(int x, int y, int cnt)
{
    visit[x][y] = 1;
    ans = max(ans, cnt);
    for(int i = 0; i < 4; i++) {
        if(mp[x + gox[i]][y + goy[i]] && visit[x + gox[i]][y + goy[i]] == 0 && check(x, gox[i]) && check(y, goy[i])) {
            // visit[x + gox[i]][y + goy[i]] = 1;
            dfs(x + gox[i], y + goy[i], cnt + 1);
            //visit[x + gox[i]][y + goy[i]] = 0;
        }
    }
    visit[x][y] = 0;
}

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for(int j = 1; j <= n; j++) {
            mp[i][j] = (s[j - 1] == '1' ? 1 : 0);
        }
    }
    visit[1][1] = 1;
    if(mp[1][1]) dfs(1, 1, 1);
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
