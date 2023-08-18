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
struct TYPE{
    int pre, suf, sum, maxx;
};
const int SIZE = 1 << 19;
struct segment_tree
{
    TYPE node[SIZE];
    TYPE merge(TYPE a, TYPE b) {
        TYPE ret;
        ret.pre = max({a.pre, a.sum + b.pre});
        ret.sum = a.sum + b.sum;
        ret.suf = max({a.suf + b.sum, b.suf});
        ret.maxx = max({a.maxx, b.maxx, a.suf + b.pre});
        return ret;
    }
    void pull(int idx) {
        node[idx] = merge(node[idx * 2], node[idx * 2 + 1]);
    }
    void init(int L, int R, int idx, vector<TYPE> &input) {
        if(L == R) {
            node[idx] = input[L];
            return;
        }
        int now = (L + R) / 2;
        init(L, now, idx * 2, input);
        init(now + 1, R, idx * 2 + 1, input);
        pull(idx);
    }
    TYPE query(int L, int R, int idx, int l, int r) {
        if(L >= l && R <= r) return node[idx];
        int now = (L + R) / 2;
        if(r <= now) return query(L, now, idx * 2, l, r);
        if(l > now) return query(now + 1, R, idx * 2 + 1, l, r);
        return merge(query(L, now, idx * 2, l, r), query(now + 1, R, idx * 2 + 1, l, r));
    }
    void update(int L, int R, int idx, int p, TYPE v) {
        if(L == R) {
            node[idx] = v;
            return;
        }
        int now = (L + R) / 2;
        if(p <= now) update(L, now, idx * 2, p, v);
        else update(now + 1, R, idx * 2 + 1, p, v);
        pull(idx);
    }
};
void solve()
{
    int n, m;
    while(cin >> n >> m) {
        segment_tree seg;
        vector<TYPE> v(n + 1);
        for(int i = 1; i <= n; i++) {
            int now;
            cin >> now;
            v[i].sum = v[i].suf = v[i].pre = v[i].maxx = now;
        }
        seg.init(1, n, 1, v);
        while(m--) {
            int a, b;
            cin >> a >> b;
            if(b < a) swap(a, b);
            int ans = seg.query(1, n, 1, a, b).maxx;
            cout << (ans > 0 ? ans : 0) << '\n';
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
