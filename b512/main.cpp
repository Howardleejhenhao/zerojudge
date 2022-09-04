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


#define int long long
map<int, int> m;
int ans;
void solve()
{
    string s;
    while(cin >> s)
    {
        if(s == "0:0") break;
        int a = 0, b = 0;
        int i = 0;
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == ':') break;
            a = a * 10 + (s[i] - '0');
        }
        for(i = i + 1; i < s.size(); i++)
        {
            b = b * 10 + (s[i] - '0');
        }
        m[a] = b;
    }
    while(cin >> s)
    {
        if(s == "0:0") break;
        int a = 0, b = 0;
        int i = 0;
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == ':') break;
            a = a * 10 + (s[i] - '0');
        }
        for(i = i + 1; i < s.size(); i++)
        {
            b = b * 10 + (s[i] - '0');
        }
        if(m.find(a) != m.end())
        {
            ans += m[a] * b;
        }
    }
    cout << ans << '\n';
    return;
}

signed main()
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
