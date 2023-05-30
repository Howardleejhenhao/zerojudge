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
const int INF = 1e9 + 10;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int ll = INF, rr = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        ll = min(ll, v[i]);
        rr = max(rr, v[i]);
    }
    vector<int> w(k);
    for(int i = 0; i < k; i++) cin >> w[i];
    while(rr > ll) {
        int now = (ll + rr + 1) / 2;
        int index = 0;
        int con = 0;;
        for(int i = 0; i < n; i++) {
            if(v[i] >= now) {
                con++;
                if(con == w[index]) {
                    index++;
                    if(index == k) {
                        break;
                    }
                    con = 0;
                }
            }
            else {
                con = 0;
            }
        }
        if(index == k) {
            ll = now;
        }
        else {
            rr = now - 1;
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
