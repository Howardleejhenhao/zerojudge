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

// 01背包
#define N 1000100
int dp[N];

void solve()
{
    string s1, s2;
    stringstream ss;
    getline(cin, s1);
    getline(cin, s2);
    int n;
    vector<int> a, w;
    cin >> n;
    ss << s1;
    int now;
    while(ss >> now) a.push_back(now);
    ss.clear();
    ss << s2;
    while(ss >> now) w.push_back(now);
    // 要注意枚舉的方向，某個位置代表用到這個至少要花多少，若用一維陣列DP的話，要注意枚舉的方向
    for(int j = 0; j < w.size(); j++) {
        for(int i = n; i >= 0; i--) {
            if(i - a[j] >= 0) dp[i] = max(dp[i], dp[i - a[j]] + w[j]);
        }
    }
    cout << dp[n] << '\n';
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
