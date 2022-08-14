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

vector<ll> pre(200100);

void solve()
{
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        ll in;
        cin >> in;
        pre[i] = pre[i - 1] + in;
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << '\n';
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
