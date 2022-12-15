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
int r, c, k, m;
const int N = 200;
int mp[N][N];

bool ok(int i, int j)
{
    return i >= 1 && i <= r && j >= 1 && j <= c && mp[i][j] != -1;
}

void solve()
{
    cin >> r >> c >> k >> m;
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            cin >> mp[i][j];
        }
    }
    while(m--) {
        int cp[r + 1][c + 1];
        for(int i = 1; i <= r; i++) {
            for(int j = 1; j <= c; j++) {
                cp[i][j] = mp[i][j];
            }
        }
        for(int i = 1; i <= r; i++) {
            for(int j = 1; j <= c; j++) {
                int th = mp[i][j] / k;
                if(ok(i, j + 1)) {
                    cp[i][j + 1] += th;
                    cp[i][j] -= th;
                }
                if(ok(i, j - 1)) {
                    cp[i][j - 1] += th;
                    cp[i][j] -= th;
                }
                if(ok(i + 1, j)) {
                    cp[i + 1][j] += th;
                    cp[i][j] -= th;
                }
                if(ok(i - 1, j)) {
                    cp[i - 1][j] += th;
                    cp[i][j] -= th;
                }
                if(cp[i][j] <= 0) cp[i][j] = -1;
            }
        }
        for(int i = 1; i <= r; i++) {
            for(int j = 1; j <= c; j++) {
                mp[i][j] = cp[i][j];
            }
        }
    }
    int ma = -1, mi = 1e9;
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            ma = max(ma, mp[i][j]);
            if(mp[i][j] != -1) mi = min(mi, mp[i][j]);
        }
    }
    cout << mi << '\n' << ma << '\n';
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
