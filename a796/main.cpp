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

vector<int> mp[10010];

void solve()
{
    int n, r;
    cin >> n >> r;
    while(r--) {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    int q;
    cin >> q;
    while(q--) {
        int k;
        cin >> k;
        if(k == 1) {
            int a;
            cin >> a;
            cout << mp[a].size() << '\n';
        }
        else {
            int a, b;
            cin >> a >> b;
            bool flag = 0;
            for(int i : mp[a]) {
                if(i == b) {
                    flag = 1;
                    break;
                }
            }
            cout << (flag ? "Yes" : "No") << '\n';

        }
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
