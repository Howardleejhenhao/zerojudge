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
int mp[50][7];
int n, m;

void change(int a, int b)
{
    for(int i = 1; i <= 6; i++)
    {
        swap(mp[a][i], mp[b][i]);
    }
}

void go(int a)
{
    int t = mp[a][1];
    mp[a][1] = mp[a][3];
    mp[a][3] = mp[a][6];
    mp[a][6] = mp[a][4];
    mp[a][4] = t;
    return;
}

void right(int a)
{
    int t = mp[a][1];
    mp[a][1] = mp[a][5];
    mp[a][5] = mp[a][6];
    mp[a][6] = mp[a][2];
    mp[a][2] = t;
    return;
}

void solve()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            mp[i][j] = j;
        }
    }
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        if(b == -1)
        {
            go(a);
        }
        else if(b == -2)
        {
            right(a);
        }
        else
        {
            change(a, b);
        }
    }
    for(int i = 1; i <= n; i++) cout << mp[i][1] << ' ';

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
