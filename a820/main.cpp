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

#define N 100
int mp[N][N];
int ans;
int n, m;

// 1 右上 2 左上 3 左下 4 右下

pair<int, int> three(int x, int y)
{
    int now = 0;
    while(1) {
        if(x - now < 1 || y + now > m) {
            break;
        }
        cout << x - now << ' ' << y + now << '\n';
        ans += mp[x - now][y + now];
        now++;
    }
    return {x - (now - 1), y + (now - 1)};
}

pair<int, int> four(int x, int y)
{
    int now = 0;
    while(1) {
        if(x - now < 1 || y - now < 1) {
            break;
        }
        ans += mp[x - now][y - now];
        cout << x - now << ' ' << y - now << '\n';
        now++;
    }
    return {x - (now - 1), y - (now - 1)};
}

pair<int, int> one(int x, int y)
{
    int now = 0;
    while(1) {
        if(x + now > n || y - now < 1) {
            break;
        }
        ans += mp[x + now][y - now];
        cout << x + now << ' ' << y - now << '\n';
        now++;
    }
    return {x + (now - 1), y - (now - 1)};
}

pair<int, int> two(int x, int y)
{
    int now = 0;
    while(1) {
        if(x + now > n || y + now > m) {
            break;
        }
        ans += mp[x + now][y + now];
        cout << x + now << ' ' << y + now << '\n';
        now++;
    }
    return {x + (now - 1), y + (now - 1)};
}

void solve()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    int x, y, which;
    cin >> x >> y >> which;
    pair<int, int> now = {y, x};
    // ans += mp[y][x];
    for(int i = 0; i < 4; i++) {
        cout << now.first << ' ' << now.second << ' ' << ans << ' ' << which << '\n';
        if(which == 1) {
            now = one(now.first, now.second);
        }
        else if(which == 2) {
            now = two(now.first, now.second);
        }
        else if(which == 3) {
            now = three(now.first, now.second);
        }
        else {
            now = four(now.first, now.second);
        }
        x = now.first, y = now.second;
        if((x == 1 && y == 1) || (x == n && y == 1) || (x == 1 && y == m) || (x == n && y == m)) {
            which = (which + 1) % 4 + 1;
        }
        else {
            which = (which + 2) % 4 + 1;
        }
    }
    cout << ans << '\n';
    return;
}
/*
3 3
1 3 9
-4 -6 5
8 2 -7
3 1 1

44


3 4
2 5 8
3 -1 -6
7 8 -9
2 0 3
1 1 2

10
*/
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
