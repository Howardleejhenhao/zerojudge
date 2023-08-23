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
    cin >> n;
    int tmp = n;
    int a = 1, b = 1;
    for(int i = 2; i * i <= n; i++) {
        // cerr << i << '\n';
        int cnt = 0;
        while(tmp % i == 0) {
            cnt++;
            tmp /= i;
        }
        int k = 0;
        for(; k + 1 < cnt; k += 2) {
            a *= i;
        }
        if(k < cnt) b *= i;
    }
    if(tmp != 0) b *= tmp;
    if(a > 1) {
        cout << a << " ";
    }
    if(b > 1) cout << "sqrt(" << b << ")";
    cout << '\n';
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
