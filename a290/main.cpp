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

int g[900][900];
vector<int> visit(900);

int n, m;

void DFS(int x)
{
    for(int i = 0; i <= n; i++)
    {
        if(g[x][i] && !visit[i])
        {
            visit[i] = 1;
            DFS(i);
        }
    }
}

void solve()
{
    while(cin >> n >> m)
    {
        memset(g, 0, sizeof(g));
        for(int i = 0; i <= n; i++)
        {
            visit[i] = 0;
        }
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            g[a][b] = 1;
        }
        int c, d;
        cin >> c >> d;
        DFS(c);
        cout << (visit[d] ? "Yes!!!" : "No!!!") << '\n';
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
