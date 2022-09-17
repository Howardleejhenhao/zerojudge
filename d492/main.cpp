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

string s;

void solve()
{
    map<string, double> mp;
    double cnt = 0;
    while(getline(cin, s))
    {
        if(s == "") break;
        mp[s]++;
        cnt++;
    }
    for(auto i : mp)
    {
        cout << i.first << ' ' << fixed << setprecision(4) << i.second / cnt * 100 << '\n';
    }
    cout << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    getline(cin, s);
    getline(cin, s);
    while(t--)
    {
        solve();
    }
    return 0;
}
