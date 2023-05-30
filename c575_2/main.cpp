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

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int ll = 0, rr = 1e9;
    while(rr > ll) {
        int now = (rr + ll) / 2;
        int use = 1;
        int th = v[0] + now;
        for(int i = 0; i < n; i++) {
            if(v[i] > th) {
                use++;
                th = v[i] + now;
            }
        }
        if(use > k) {
            ll = now + 1;
        }
        else {
            rr = now;
        }
    }
    cout << rr << '\n';
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
