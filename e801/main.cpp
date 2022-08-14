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

struct aa
{
    int d;
    int s;
    int e;
};

bool cmp(aa a, aa b)
{
    if(a.d != b.d) return a.d < b.d;
    else if(a.e != b.e) return a.e < b.e;
    else return a.s < b.s;
}

void solve()
{
    int n;
    cin >> n;
    aa data[n];
    for(int i = 0; i < n; i++)
    {
        cin >> data[i].d >> data[i].s >> data[i].e;
    }
    sort(data, data + n, cmp);

    int ans = 0;
    int dd = 0;
    int hh = 0;
    for(int i = 0; i < n; i++)
    {
        if(data[i].d != dd)
        {
            dd = data[i].d;
            hh = data[i].e;
            ans++;
        }
        else
        {
            if(data[i].s >= hh)
            {
                ans++;
                hh = data[i].e;
            }
        }
    }
    cout << ans << '\n';
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
