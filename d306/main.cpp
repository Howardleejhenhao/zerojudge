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
    string a, b;
    cin >> a >> b;
    int aa = 0, bb = 0;
    for(int i = 0; i < a.size(); i++)
    {
        aa *= 2;
        aa += a[i] - '0';
    }

    for(int i = 0; i < b.size(); i++)
    {
        bb *= 2;
        bb += b[i] - '0';
    }
    if(__gcd(aa, bb) > 1) cout << "All you need is love!\n";
    else cout << "Love is not all you need!\n";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cout << "Pair #" << i << ": ";
        solve();
    }
    return 0;
}
