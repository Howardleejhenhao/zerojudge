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
int n;

map<int, vector<pair<int, int>>> x, y, xx, yy;

void input()
{
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        x[a].push_back({b, c});
        xx[a].push_back({-b, c});
        y[b].push_back({a, c});
        yy[b].push_back({-a, c});
    }
}

void srt()
{
    for(pair<int, vector<pair<int, int>>> i : x) {
        sort(i.second.begin(), i.second.end());
    }

    for(pair<int, vector<pair<int, int>>> i : xx) {
        sort(i.second.begin(), i.second.end());
    }

    for(pair<int, vector<pair<int, int>>> i : y) {
        sort(i.second.begin(), i.second.end());
    }

    for(pair<int, vector<pair<int, int>>> i : yy) {
        sort(i.second.begin(), i.second.end());
    }
}

void solve()
{
    cin >> n;
    input();
    srt();
    pair<int, int> now = {0, 0};
    int th = 1; // 1代表右邊 2 代表下面3代表左邊4代表上面
    int ans = 0;
    while(1) {
        if(th == 1) {
            auto tmp = upper_bound(x[now.first].begin(), x[now.first].end(), now.second) - x[now.first].begin();
            if(tmp == x[now.first].size()) {
                break;
            }
            else {
                now = {now.first, x[now.first][tmp]};
            }
        }
        else if(th == 2) {

        }
        else if(th == 3) {

        }
        else {

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
