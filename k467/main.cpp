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
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<int> c, d;
    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) c.push_back(i + 1);
        else d.push_back(i + 1);
    }
    if(c.size() == 0) cout << "-1";
    for(int i : c) cout << i << ' ';
    cout << '\n';

    if(d.size() == 0) cout << "-1";
    for(int i : d) cout << i << ' ';
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
