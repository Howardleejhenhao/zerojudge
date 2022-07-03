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
int ans[120][120];
int s;
int n, m;

vector<pair<int, int>> s1, s2;

void solve()
{
    s1.push_back({0, 1});
    s1.push_back({0, -1});
    s1.push_back({1, 0});
    s1.push_back({-1, 0});

    s2.push_back({0, -1});
    s2.push_back({0, 1});
    s2.push_back({1, 0});
    int time_case = 1;
    while(cin >> s)
    {
        cout << "Case " << time_case << ":\n";
        memset(mp, 0, sizeof(mp));
        memset(visit, 0, sizeof(visit));
        memset(ans, 0, sizeof(ans));
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> mp[i][j];
            }
        }
        for(int i = 0; i < m; i++)
        {
            if(mp[0][i] == 1)
            {
                queue<pair<int, int>> q;
                q.push({0, i});
                ans[0][i] = 1;
                while(!q.empty())
                {
                    pair<int, int> now = q.front();
                    q.pop();
                    if(s == 1)
                    {
                        //dbg(i);
                        for(int h = 0; h < 4; h++)
                        {

                            if(now.first + s1[h].first >= 0 && now.first + s1[h].first < n && now.second + s1[h].second >= 0 && now.second + s1[h].second < m)
                            {
                                if(ans[now.first + s1[h].first][now.second + s1[h].second] == 0 && mp[now.first + s1[h].first][now.second + s1[h].second] == 1)
                                {
                                    ans[now.first + s1[h].first][now.second + s1[h].second] = ans[now.first][now.second] + 1;
                                    q.push({now.first + s1[h].first, now.second + s1[h].second});
                                }
                            }
                        }
                    }
                    else
                    {
                        for(int h = 0; h < 3; h++)
                        {
                            if(now.first + s2[h].first >= 0 && now.first + s2[h].first < n && now.second + s2[h].second >= 0 && now.second + s2[h].second < m)
                            {
                                if(ans[now.first + s2[h].first][now.second + s2[h].second] == 0 && mp[now.first + s2[h].first][now.second + s2[h].second] == 1)
                                {
                                    ans[now.first + s2[h].first][now.second + s2[h].second] = ans[now.first][now.second] + 1;
                                    q.push({now.first + s2[h].first, now.second + s2[h].second});
                                }
                            }
                        }
                    }
                }
                break;
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << ans[i][j] << ' ';
            }
            cout << '\n';
        }
        time_case++;
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
