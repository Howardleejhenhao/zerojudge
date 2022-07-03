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
    getline(cin, s);
    stringstream ss;
    ss << s;
    while(ss >> s)
    {
        if(s.length() < 4) continue;
        int len = s.length();
        for(int i = 0; i < len - 3; i++)
        {
            // cout << (int)s[i] << ' ' << (int)s[i + 1] << ' ' << (int)s[i + 2] << ' ' << (int)s[i + 3] << '\n';
            if((s[i + 1] - s[i] == 3 || s[i + 1] - s[i] == 35) && s[i + 2] - s[i + 1] == 7 && s[i + 3] - s[i + 2] == -17)
            {
                //cout << s[i + 1] - 111 << '\n';
                if(s[i + 1] - 111 <= 0) cout << abs(s[i + 1] - 111) << '\n';
                else cout << 26 - (int)abs(s[i + 1] - 111) << '\n';
                //if(s[i + 1] - 111 >= 0) cout << s[i + 1] - 111 << '\n';
                //else cout << 26 - (int)abs(s[i + 1] - 111) << '\n';
                return;
            }
        }
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
