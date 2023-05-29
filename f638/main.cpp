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
int n, k;
const int N = 5e4 + 10;
int v[N];
int lpre[N], rpre[N];
const int INF = LONG_MAX;

int f(int L, int R, int now)
{
    if(now >= k) return 0;
    else if(R - L < 2) return 0;
    lpre[L] = 0; // 算出cost的錢墜和後墜
    int dd = 0;
    for(int i = L + 1; i <= R; i++) {
        dd += v[i - 1];
        lpre[i] = lpre[i - 1] + dd;
    }
    rpre[R] = 0;
    dd = 0;
    for(int i = R - 1; i >= L; i--) {
        dd += v[i + 1];
        rpre[i] = rpre[i + 1] + dd;
    }
    int mi = INF, index = 0;
    for(int i = L + 1; i <= R - 1; i++) {
        int cost = abs(rpre[i] - lpre[i]);
        if(cost < mi) {
            mi = cost;
            index = i;
        }
    }
    return v[index] + f(L, index - 1, now + 1) + f(index + 1, R, now + 1);
}

void solve()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    cout << f(1, n, 0);
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
