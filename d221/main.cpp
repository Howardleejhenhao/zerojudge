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
#define int long long

using namespace std;

void solve()
{
    int n;
    while(cin >> n)
    {
        if(!n) exit(0);
        priority_queue<int, vector<int>, greater<int>> pq;
        int u = n - 1;
        while(n--)
        {
            int in;
            cin >> in;
            pq.push(in);
        }
        int ans = 0;
        while(u--)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            ans += a + b;
            pq.push(a + b);
        }
        cout << ans << '\n';
    }
    return;
}

signed main()
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
