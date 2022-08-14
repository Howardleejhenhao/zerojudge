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

bool cmp(pair<string, double> a, pair<string, double> b)
{
    if(a.second != b.second) return a.second > b.second;
    else return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<string, double>> ans;
    for(int i = 0; i < n; i++)
    {
        double now = 0;
        string name;
        double a, b, c, d;
        cin >> name >> a >> b >> c >> d;
        now = a * (c / b) * d;
        ans.push_back({name, now});
    }
    sort(ans.begin(), ans.end(), cmp);
    for(auto i : ans) cout << i.first << '\n';
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
