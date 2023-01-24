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
const int md = 1e4;

int p, q, r, a0, a1, n;
int A(int n) {
    if(n == 0) return a0;
    if(n == 1) return a1;
    return (p * A(n - 1) % md + q * A(n - 2) % md + r) % md;
}

void solve()
{
    cin >> p >> q >> r >> a0 >> a1 >> n;
    cout << setw(4) << setfill('0') << A(n) << '\n';
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
