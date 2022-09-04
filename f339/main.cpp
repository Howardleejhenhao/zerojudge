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

vector<int> mp((int)1e5 + 100);

void solve()
{
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        for(int i = a; i < b; i++) mp[i]++;
    }
    int now = -1;
    for(int i = 0; i < n; i++)
    {
        if(now == -1)
        {
            if(mp[i] == 0)
            {
                now = i;

            }
        }
        else
        {
            if(mp[i] != 0)
            {
                cout << now << ' ' << i << '\n';
                now = -1;
            }
        }
    }
    if(now != -1) cout << now << ' ' << n << '\n';
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
