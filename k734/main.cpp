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

const int N = 1e5 + 10;

vector<int> ed[N];
vector<int> have[N];
vector<int> vis(N);
int n, m, k;
int ans;
vector<int> use(N);

void solve()
{
    cin >> n >> m >> k;
    int tt;
    cin >> tt;
    vector<int> fir(tt);
    for(int i = 0; i < tt; i++) {
        cin >> fir[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int in;
            cin >> in;
            ed[in].push_back(i);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int in;
            cin >> in;
            have[i].push_back(in);
        }
    }
    queue<int> q;
    for(int i = 0; i < tt; i++) {
        vis[fir[i]] = 1;
        q.push(fir[i]);
    }
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(int i : ed[now]) {
            use[i]++;
            if(use[i] == k) {
                ans++;
                for(int j = 0; j < k; j++) {
                    if(vis[have[i][j]] == 0) {
                        q.push(have[i][j]);
                        vis[have[i][j]] = 1;
                    }
                }
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
