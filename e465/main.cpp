#include<bits/stdc++.h>

using namespace std;

const int N = (int)1e5 + 10;
int dp[N];
const int INF = 1e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m, s, n;
    cin >> m >> s >> n;
    vector<int> v(n);
    int aaa = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        aaa += v[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = m; j >= 0; j--) {
            if(j - v[i] >= 0) {
                dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
                // dp[j] = min(dp[j], dp[j - 1]);
            }
        }
    }
    cout << aaa - dp[m - s] << '\n';
    return 0;
}
