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

vector<int> mp[30];

int visit[30];
int go[30];
int ans = 1e9;

void dfs(int x, int now)
{
    for(int i : mp[x]) {
        if(visit[i] == 1) {
            if(x == i) {
                ans = min(ans, 1);
            }
            else {
                ans = min(ans, now);
            }
        }
        // else if(visit[i] == 2) continue;
        else {
            visit[x] = 1;
            dfs(i, now + 1);
            visit[x] = 0;
        }
    }

    // visit[x] = 2;
}

void solve()
{
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        mp[s[0] - 'A'].push_back(s[1] - 'A');
    }
    for(int i = 0; i < 30; i++) {
        if(mp[i].size() > 0 && visit[i] == 0) {
            dfs(i, 1);
        }
    }
    if(ans == (int)1e9) cout << '0';
    else cout << ans;
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
