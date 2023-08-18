#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 5e5 + 10;
const int lgN = 19;

struct RMQ_LCA {
    int anc[N][lgN + 1];
    int dis[N][lgN + 1];
    vector<int> ed[N];
    int tin[N], tout[N];
    int ti;

    void build(int x, int f, int d) {
        for (int i = 0; i <= lgN; i++) {
            anc[x][i] = f;
            dis[x][i] = d;
            f = anc[f][i];
            d += dis[x][i];
        }
    }

    void dfs(int x, int fx) {
        anc[x][0] = fx;
        if (x != fx) build(x, fx, 1);
        tin[x] = ti++;
        for (int i : ed[x]) {
            if (i == fx) continue;
            dfs(i, x);
        }
        tout[x] = ti++;
    }

    void makeanc() {
        for (int i = 1; i <= lgN; i++) {
            for (int u = 1; u < N; u++) {
                anc[u][i] = anc[anc[u][i - 1]][i - 1];
            }
        }
    }

    bool isAncestor(int x, int y) {
        return tin[x] <= tin[y] && tout[x] >= tout[y];
    }

    int getLca(int x, int y) {
        if (isAncestor(x, y)) return x;
        if (isAncestor(y, x)) return y;
        for (int i = lgN; i >= 0; i--) {
            if (!isAncestor(anc[y][i], x)) {
                y = anc[y][i];
            }
        }
        return anc[y][0];
    }

    int queryDis(int x, int y) {
        int lca = getLca(x, y);
        int ret = 0;
        for (int i = lgN; i >= 0; i--) {
            if (!isAncestor(anc[x][i], lca)) {
                ret += dis[x][i];
                x = anc[x][i];
            }
            if (!isAncestor(anc[y][i], lca)) {
                ret += dis[y][i];
                y = anc[y][i];
            }
        }
        if (x != lca) ret += dis[x][0];
        if (y != lca) ret += dis[y][0];
        return ret;
    }
};

int n, m;

void solve() {
    cin >> n >> m;
    RMQ_LCA lca;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        lca.ed[a].push_back(b);
        lca.ed[b].push_back(a);
    }
    lca.dfs(1, 1);
    lca.makeanc();
    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << lca.queryDis(a, b) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
