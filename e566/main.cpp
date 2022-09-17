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
    ll n, m;
    while(cin >> n >> m)
    {
        vector<ll> v;
        if(m == 0)
        {
            cout << "Boring!\n";
            continue;
        }
        while(n > 0)
        {
            v.push_back(n);
            n /= m;
        }
        // for(int i : v) cout << i << ' ';
        bool flag = 1;
        for(ll i : v)
        {
            if(i == 1) continue;
            if(i % m != 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            for(ll i : v) cout << i << ' ';
        }
        else cout << "Boring!";
        cout << '\n';
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
