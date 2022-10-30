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
���D�n�`�N���O
���j�ɭn�����n�Ωε۬O���n��
�åB�Φ^�Ҫk��
cnt�N���O�{�b�ƨ�X�ӥi�H�t�諸�F��
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
    dfs(newx, newy, cnt); // ��ܳo�椣���~�򻼰j
    if(visit[x][y]) return; // ��ܳo�@��w�g�ιL�A���i�~�򻼰j
    // ���U�ӷ|�����case���O�O�V�k�M�V�U
    // �n�`�N���O��e���I�i���i�H�t��Ӥ��O�s�n���j���I
    // �V�U
    if(y + 1 <= m) {
        if(mp[x][y + 1] == mp[x][y] && !visit[x][y + 1]) {
            visit[x][y] = 1;
            visit[x][y + 1] = 1;
            dfs(x, y, cnt + 1);
            visit[x][y] = 0;
            visit[x][y + 1] = 0;
        }
    }
    // �V�k
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
