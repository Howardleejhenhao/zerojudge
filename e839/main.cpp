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

map<string, vector<string>> m;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        m[b].push_back(a);
    }
    string ans;
    cin >> ans;
    if(m[ans].empty())
    {
        cout << "No\n";
        exit(0);
    }
    vector<string> aa = m[ans];
    sort(aa.begin(), aa.end());
    for(string i : aa) cout << i << '\n';
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
