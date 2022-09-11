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
    vector<int> v(n);
    for(auto & i : v) cin >> i;
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += abs(v[i] - v[n / 2]);
    }
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
