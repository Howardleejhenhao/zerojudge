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

int ar[20][20];
int ans[20][20];


void solve()
{
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> ar[i][j];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(ar[i][j] == 0)
            {
                int d = 0;
                int cnt = 0;
                if(i - 1 >= 0 && ar[i - 1][j] != 0)
                {
                    d++;
                    cnt += ar[i - 1][j];
                }
                if(j - 1 >= 0 && ar[i][j - 1] != 0)
                {

                    d++;
                    cnt += ar[i][j - 1];
                }
                if(j + 1 < c && ar[i][j + 1] != 0)
                {
                    dbg(j);
                    d++ ;
                    cnt += ar[i][j + 1];
                }
                if(i + 1 < r && ar[i + 1][j] != 0)
                {
                    d++;
                    cnt += ar[i + 1][j];
                }
                dbg(i, j);
                dbg(cnt, d);
                if(d == 0) continue;
                ans[i][j] = cnt / d;
            }
            else
            {
                ans[i][j] = ar[i][j];
            }
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
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
