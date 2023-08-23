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

const int N = 4100;

struct DSU
{
    int p[N];
    int sz[N];
    int now_sz;
    void init(int s)
    {
        for(int i = 0; i <= s; i++)
        {
            p[i] = i;
            sz[i] = 1;
        }
        now_sz = s;
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
        if(aa == bb)
        {
            return 0;
        }
        p[aa] = bb;
        sz[bb] += sz[aa];
        now_sz--;
        return 1;
    }
}dd;

int d, n;
int mp[N][7];
struct edge
{
    int u, v, w;
    bool operator<(const edge& other) const {
        return w < other.w;
    }
};

vector<edge> ed;

void solve()
{
    cin >> d >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= d; j++) cin >> mp[i][j];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            int w = 0;
            for(int k = 1; k <= d; k++) {
                w += abs(mp[i][k] - mp[j][k]);
            }
            ed.push_back({i, j, w});
        }
    }
    dd.init(n);
    sort(ed.begin(), ed.end());
    for(int i = 0; i < ed.size(); i++) {
        if(dd.find(ed[i].u) != ed[i].v) {

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
