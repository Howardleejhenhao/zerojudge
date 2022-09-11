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
    int n;
    cin >> n;
    vector<int> cnt(n + 1, 0);
    int nn;
    cin >> nn;
    int ans = 0;
    for(int i = 0; i < nn; i++)
    {
        int in;
        cin >> in;
        for(int j = in; j <= n; j += in)
        {
            cnt[j] = 1;
        }
    }
    for(int i = 6; i <= n; i+=7)
    {
        cnt[i] = 0;
    }

    for(int i = 7; i <= n; i+=7)
    {
        cnt[i] = 0;
    }
    for(int i = 1; i <= n; i++) ans += cnt[i];
    cout << ans << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
