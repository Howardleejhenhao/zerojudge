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
    int n, m;
    cin >> n >> m;
    pair<int, int> up = {0, 0}, down = {0, 0};
    for(int i = 1; i <= n; i++) {
        vector<int> v(m);
        for(int j = 0; j < m; j++) cin >> v[j];
        int a = 0, b = 0;
        for(int j = 1; j < m; j++) {
            if(v[j] - v[j - 1] > 0) {
                a += v[j] - v[j - 1];
            }
            else {
                b += -(v[j] - v[j - 1]);
            }
            // cerr << v[i] - v[i - 1] << ' ';
        }
        // cerr << '\n';
        if(a > up.second) {
            up = {i, a};
        }
        if(b > down.second) {
            down = {i, b};
        }
        // cerr << a << ' ' << b << '\n';
    }
    cout << up.first << '\n' << down.first << '\n';
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
