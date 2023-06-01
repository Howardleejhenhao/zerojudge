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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

bool cmp2(int a, int b) {return a > b;}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first;
    for(int i = 0; i < n; i++) cin >> v[i].second;
    vector<int> rb(k, 0);
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            if(v[i].first > rb[j]) {
                rb[j] = v[i].second;
                ans++;
                break;
            }
        }
        sort(rb.begin(), rb.end(), cmp2);
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
