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

int cnt[100];
string dp[(int)1000010]; // 代表花n元可以到的大小
void solve()
{
    for(int i = 1; i <= 9; i++) cin >> cnt[i];
    for(int i = 1; i <= 1000000; i++) {
        for(int j = 1; j <= 9; j++) {
            if(i - j < 0) continue;
            dp[i] = max(dp[i], dp[i - j] + to_string(cnt[j]));
        }
    }
    cerr << "===============\n";
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        cerr << "====" << dp[n] << '\n';
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
