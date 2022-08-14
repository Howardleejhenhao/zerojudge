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
    int in[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> in[i][j];
        }
    }
    vector<int> aa(m), oo(m), xox(m);
    for(int i = 0; i < m; i++)
    {
        int now = 1;
        for(int j = 0; j < n; j++)
        {
            now &= in[j][i];
        }
        aa[i] = now;
        now = 0;
        for(int j = 0; j < n; j++)
        {
            now |= in[j][i];
        }
        oo[i] = now;
        now = 0;
        for(int j = 0; j < n; j++)
        {
            now ^= in[j][i];
        }
        xox[i] = now;
    }
    cout << "AND: ";
    for(int i : aa) cout << i << ' ';
    cout << '\n';
    cout << " OR: ";
    for(int i : oo) cout << i << ' ';
    cout << '\n';
    cout << "XOR: ";
    for(int i : xox) cout << i << ' ';
    cout << '\n';
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
