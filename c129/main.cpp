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

int mp[120][120];
bool visit[120][120];
int n, m;

void dfs(int x, int y)
{
    if(mp[x][y] == 0) return;
    if(x > 0 && visit[x - 1][y] == 0 && mp[x - 1][y] == 1)
    {
        visit[x - 1][y] = 1;
        dfs(x - 1, y);
    }
    if(x < n - 1 && visit[x + 1][y] == 0 && mp[x + 1][y] == 1)
    {
        visit[x + 1][y] = 1;
        dfs(x + 1, y);
    }
    if(y > 0 && visit[x][y - 1] == 0 && mp[x][y - 1] == 1)
    {
        visit[x][y - 1] = 1;
        dfs(x, y - 1);
    }
    if(y < m - 1 && visit[x][y + 1] == 0 && mp[x][y + 1] == 1)
    {
        visit[x][y + 1] = 1;
        dfs(x, y + 1);
    }
    if(x > 0 && y > 0 && visit[x - 1][y - 1] == 0 && mp[x - 1][y - 1] == 1)
    {
        visit[x - 1][y - 1] = 1;
        dfs(x - 1, y - 1);
    }
    if(x > 0 && y < m - 1 && visit[x - 1][y + 1] == 0 && mp[x - 1][y + 1] == 1)
    {
        visit[x - 1][y + 1] = 1;
        dfs(x - 1, y + 1);
    }
    if(x < n - 1 && y > 0 && visit[x + 1][y - 1] == 0 && mp[x + 1][y - 1] == 1)
    {
        visit[x + 1][y - 1] = 1;
        dfs(x + 1, y - 1);
    }
    if(x < n - 1 && y < m - 1 && visit[x + 1][y + 1] == 0 && mp[x + 1][y + 1] == 1)
    {
        visit[x + 1][y + 1] = 1;
        dfs(x + 1, y + 1);
    }
    return;
}

void solve()
{
    while(cin >> n >> m && n && m)
    {
        memset(mp, 0, sizeof(mp));
        memset(visit, 0, sizeof(visit));
        string s[n];
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                mp[i][j] = (s[i][j] == '@' ? 1 : 0);
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(visit[i][j] == 0 && mp[i][j] == 1)
                {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        cout << ans << '\n';
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
