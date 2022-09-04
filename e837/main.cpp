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

void solve()
{
    string s;
    cin >> s;
    string ans;
    ans += s[0];
    string now;
    now += s[0];
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1] + 1)
        {
            now += s[i];
        }
        else
        {
            if(now.size() >= ans.size())
            {
                ans = now;
            }
            now.clear();
            now += s[i];
        }
    }
    if(now.size() >= ans.size())
    {
        ans = now;
    }
    cout << ans.size() << ' ' << ans << '\n';
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
