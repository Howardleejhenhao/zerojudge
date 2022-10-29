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
#define int long long

using namespace std;

#define N 100100

struct DSU
{
    int p[N];
    int sz[N];
    int now;
    void init(int s)
    {
        for(int i = 0; i <= s; i++) {
            p[i] = i;
            sz[i] = 1;
        }
        now = s;
    }
    int find(int x)
    {
        return (x == p[x] ? x : p[x] = find(p[x]));
    }
    bool dunion(int x, int y)
    {
        int aa = find(x);
        int bb = find(y);
        if(sz[aa] > sz[bb]) swap(aa, bb);
        if(aa == bb) {
            return 0;
        }
        now--;
        p[aa] = bb;
        sz[bb] += sz[aa];
        return 1;
    }
};

struct da
{
    int x;
    int y;
    int c;
};

bool cmp(da a, da b)
{
    return a.c < b.c;
}

void solve()
{
    int n, m;
    while(cin >> n >> m) {
        DSU dd;
        dd.init(n);
        da ed[m];
        for(int i = 0; i < m; i++) {
            cin >> ed[i].x >> ed[i].y >> ed[i].c;
        }
        sort(ed, ed + m, cmp);
        int total = 0;
        for(int i = 0; i < m; i++) {
            if(dd.now == 1) break;
            if(dd.dunion(ed[i].x, ed[i].y)) {
                total += ed[i].c;
            }
        }
        if(dd.now > 1) cout << "-1\n";
        else cout << total << '\n';
    }
    return;
}

signed main()
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
