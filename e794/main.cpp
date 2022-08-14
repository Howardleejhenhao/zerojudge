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
    int ans[50];
    ans[1] = 1;
    ans[2] = 1;
    for(int i = 3; i <= 46; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    cin >> n;
    cout << ans[n] << ':' << ans[n + 1] << '\n';
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
