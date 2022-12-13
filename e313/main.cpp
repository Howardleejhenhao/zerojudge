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
    string s[n], cp[n];
    int mi = INT_MAX;
    vector<string> ans;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        cp[i] = s[i];
        cp[i].resize(unique(cp[i].begin(), cp[i].end()) - cp[i].begin());
        mi = min(mi, (int)cp[i].size());
    }
    for(int i = 0; i < n; i++){
        if(cp[i].size() == mi) ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());
    cout << ans[0] << '\n';

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
