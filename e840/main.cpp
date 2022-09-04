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
    int ans = 0;
    int pass = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            pass++;
            if(i && s[i - 1] >= '0' && s[i - 1] <= '9')
            {
                ans -= 2;
            }
        }

    }
    int len = s.size();
    int en = len - pass;
    ans += len * 3 + en * 3 + pass * 2;
    if(len >= 8 && en && pass) ans += 10;
    else ans -= 5;
    if(!pass && en) ans -= len;
    if(pass && !en) ans -= len;
    cout << ans << '\n';
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
