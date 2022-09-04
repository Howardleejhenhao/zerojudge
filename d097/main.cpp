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
    while(cin >> n)
    {
        vector<int> v(n, 0);
        int now;
        int pp;
        cin >> pp;
        for(int i = 1; i < n; i++)
        {
            cin >> now;
            v[abs(now - pp)]++;
            pp = now;
        }
        bool flag = 1;
        for(int i = 1; i < n; i++)
        {
            if(v[i] != 1)
            {
                flag = 0;
                break;
            }
            if(!flag) break;
        }
        cout << (flag ? "Jolly" : "Not jolly") << '\n';

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
