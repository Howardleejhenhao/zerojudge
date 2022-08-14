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


int mp[1200] = {0};
void solve()
{
    int b, p;
    cin >> b >> p;
    while(p--)
    {
        int a, b;
        cin >> a >> b;
        if(b < a) swap(a, b);
        mp[a]++;
        mp[b + 1]--;
    }
    pair<int, int> s = {INT_MAX, 1};
    pair<int, int> f = {INT_MIN, 1};
    int now = 0;
    for(int i = 1; i <= b; i++)
    {
        now += mp[i];
        if(now >= f.first)
        {
            f = {now, i};
        }
        if(now < s.first)
        {
            s = {now, i};
        }
    }
    cout << s.second << ' ' << f.second << '\n';
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
