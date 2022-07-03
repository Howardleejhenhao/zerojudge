#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;
template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }


template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifndef HOWARD_DBG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

vector<vector<int>> g(1e5 + 100);
vector<int> depth(1e5 + 100), parent(1e5 + 100);

int n;
int dist;

void DFS1(int x, int xy)
{
    for(int i : g[x])
    {
        if(i != xy)
        {
            DFS1(i, x);
            parent[i] = x;
        }
    }
}

int DFS2(int x, int xy)
{
    int h1 = 0, h2 = 0;
    for(int i : g[x])
    {
        if(i != xy)
        {
            int h = DFS2(i, x) + 1;
            if(h > h1)
            {
                h2 = h1;
                h1 = h;
            }
            else if(h > h2) h2 = h;
        }
    }
    dist = max(dist, h1 + h2);
    return h1;
}

void solve()
{
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            g[i].clear();
            depth[i] = 0;
            parent[i] = -1;
        }
        for(int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        DFS1(0, -1);
        int root;
        for(int i = 0; i < n; i++)
        {
            if(parent[i] == -1)
            {
                root = i;
                break;
            }
        }
        // cout << root << '\n';
        dist = 0;
        DFS2(root, root);
        cout << dist << '\n';
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef HOWARD_DBG
    cin.tie(nullptr);
#endif


    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
