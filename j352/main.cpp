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
    int rain[n];
    int sum[n];
    for(int i = 0; i < n; i++) cin >> rain[i];
    for(int i = 0; i < n; i++) cin >> sum[i];
    int r, u;
    cin >> r >> u;
    int i = -1;
    while(r > 0 || u > 0) {
        i++;
        if(i >= n) break;
        r -= rain[i];
        u -= sum[i];
    }
    cout << (i >= n ? -1 : i + 2);
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
