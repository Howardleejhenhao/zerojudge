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

vector<int> ed[60];
int visit[60][60];
int k, m, n, p, ans, all;

void dfs(int x, int now, int total)
{
    // cerr << x << ' ' << now << ' ' << total << '\n';
    ans = max(ans, total);
    if(ans >= all || now == 0 || total + now * m <= ans) return;// total + now - m <= ans��ܳo�ؤ��i��O�̨θѡA�]���̫᪺�`�X�@�w�|��ans�p
    else {
        for(int i : ed[x]) {
            int num = min(visit[i][x], m);
            visit[i][x] -= num;
            visit[x][i] -= num;
            dfs(i, now - 1, total + num);
            visit[i][x] += num;
            visit[x][i] += num;
        }
    }
}

void solve()
{
    cin >> k >> m >> n >> p;
    while(p--) {
        int a, b, c;
        cin >> a >> b >> c;
        all += c;
        visit[a][b] = c;
        visit[b][a] = c;
        ed[a].push_back(b);
        ed[b].push_back(a);
    }
    dfs(1, n, 0);
    if(ans >= all) cout << all << '\n';
    else cout << ans << '\n';
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
