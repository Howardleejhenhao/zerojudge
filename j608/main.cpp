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

bool cmp(int a, int b)
{
    return a > b;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].second;
    for(int i = 0; i < n; i++) cin >> v[i].first;
    sort(v.begin(), v.end());
    int now[k];
    for(int i = 0; i < k; i++) now[i] = -1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            if(now[j] < v[i].second) {
                now[j] = v[i].first;
                ans++;
                break;
            }
        }
        sort(now, now + k, cmp);
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
    while(t--)
    {
        solve();
    }
    return 0;
}
