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
    char c;
    cin >> c;
    vector<int> v[n];
    for(int i = 0; i < n; i++)
    {
        v[i].resize(m);
        ll now;
        cin >> now;
        int j = 0;
        while(now > 0)
        {
            v[i][j] = now % 2;
            now /= 2;
            j++;
        }
        reverse(v[i].begin(), v[i].end());
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << (v[i][j] == 1 ? c : '.') << ' ';
        }

        cout << '\n';
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
