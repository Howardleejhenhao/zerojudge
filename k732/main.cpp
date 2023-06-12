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
    int mp[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
        cin >> mp[i][j];
        }
    }
    int a[3000], b[3000];
    int index = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int now = 0;
            for(int ii = 0; ii < n; ii++) {
                for(int jj = 0; jj < m; jj++) {
                    if(abs(i - ii) + abs(j - jj) <= mp[i][j]) {
                        now += mp[ii][jj];
                    }
                }
            }
            if(mp[i][j] % 10 == now % 10) {
                a[index] = i;
                b[index] = j;
                index++;
            }
        }
    }
    cout << index << '\n';
    for(int i = 0; i < index; i++) {
        cout << a[i] << ' ' << b[i] << '\n';
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
