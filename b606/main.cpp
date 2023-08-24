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
    if(n == 0) exit(0);
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(int i = 0; i < n; i++) {
        ll now;
        cin >> now;
        pq.push(now);
    }
    ll ans = 0;
    while(1) {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        ans += a + b;
        if(!pq.size()) break;
        pq.push(a + b);
    }
    cout << ans << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(1)
    {
        solve();
    }
    return 0;
}
