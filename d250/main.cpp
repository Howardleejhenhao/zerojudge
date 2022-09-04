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
    ll n;
    cin >> n;
    bool mp[11] = {0};
    while(n > 0)
    {
        mp[n % 10] = true;
        n /= 10;
    }
    for(int i = 1; i <= 9; i++)
    {
        if(mp[i] == 0)
        {
            cout << i << '\n';
            return;
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 9;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
