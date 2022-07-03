#include <bits/stdc++.h>
#define fastio ios::sync_with_studio(0), cin.tie(0)
using namespace std;

int main()
{
    long long dp[101][101];
    dp[1][1] = 1;
    for(int i = 0; i < 101; i++)
    {
        dp[i][0] = 1;
    }
    for(int i = 2; i < 101; i++)
    {
        for(int j = 1; j < 101; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    int a, b;
    while(cin >> a >> b)
    {
        if(a == 0) return 0;
        cout << a <<" things taken " << b << " at a time is " << dp[a][b] << "exactly.\n";
    }
    return 0;
}
