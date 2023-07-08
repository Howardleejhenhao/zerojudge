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
    while(cin >> n && n) {
        double ans = -1;
        int index;
        for(int i = 1; i <= n; i++) {
            double w, h;
            cin >> w >> h;
            double now = max(min(w / 4.0, h), min(h / 4.0, w));
            now = max(now, min(w / 2.0, h / 2.0));
            if(now > ans) {
                index = i;
                ans = now;
            }
        }
        cout << index << '\n';
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
