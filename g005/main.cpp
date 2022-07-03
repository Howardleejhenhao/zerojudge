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

void solve()
{
    string s;
    cin >> s;
    string ans;
    int now = 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-')
        {
            now = 0;
            string sn;
            i++;
            while(s[i] != '+' && i < s.size() && s[i] != '-')
            {
                /*
                if(s[i] == '-')
                {
                    break;
                    //continue;
                }*/
                sn += s[i];
                i++;
            }
            if(s[i] == '-')
            {
                i--;
            }
            for(int j = sn.size() - 1; j >= 0; j--)
            {
                ans += sn[j];
            }
            continue;
        }
        if(s[i] == '+') continue;
        ans += s[i];
    }
    cout << ans << '\n';
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
