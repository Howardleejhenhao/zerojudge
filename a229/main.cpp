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

string s;

vector<int> mp(2);
int t;
const string aa = "()";


void dfs(int n, int l, int r)
{
    //cout << n << ' ' << l << ' ' << r << '\n';
    if(l < r) return;
    if(n == t * 2)
    {
        if(l == r)
        {
            cout << s << '\n';
        }
        return;
    }
    for(int i = 0; i < 2; i++)
    {
        if(mp[i])
        {
            mp[i]--;
            s[n] = (i == 0 ? '(' : ')');
            if(i == 0)
            {
                dfs(n + 1, l + 1, r);
            }
            else
            {
                dfs(n + 1, l, r + 1);
            }
            mp[i]++;
        }
    }

}

void solve()
{
    while(cin >> t)
    {
        s = "";
        mp[0] = mp[1] = t;
        for(int i = 0; i < t * 2; i++) s += ' ';
        dfs(0, 0, 0);
        cout << '\n';
    }
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
