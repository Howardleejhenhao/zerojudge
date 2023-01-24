#include <bits/stdc++.h>

using namespace std;
const int N = 100;
int now_line[N];
int mp[N][N];
int r, c, n;

bool A(int x)
{
    int now = max({now_line[x], now_line[x + 1], now_line[x + 2], now_line[x + 3]});
    if(now >= c - 1) {
        return false;
    }
    now++;
    mp[x][now] = mp[x + 1][now] = mp[x + 2][now] = mp[x + 3][now] = 1;
    now_line[x] = now_line[x + 1] = now_line[x + 2] = now_line[x + 3] = now;
    return true;
}

bool B(int x)
{
    if(now_line[x] + 3 >= c) {
        return false;
    }
    mp[x][now_line[x] + 1] = mp[x][now_line[x] + 2] = mp[x][now_line[x] + 3] = 1;
    now_line[x] += 3;
    return true;
}

bool C(int x)
{
    int now = max(now_line[x], now_line[x + 1]);
    if(now + 2 >= c) {
        return false;
    }
    now++;
    mp[x][now] = mp[x][now + 1] = mp[x + 1][now] = mp[x + 1][now + 1] = 1;
    now_line[x] = now + 1;
    now_line[x + 1] = now + 1;
    return true;
}

bool D(int x)
{
    int now = max(now_line[x] + 1, now_line[x + 1] + 3);
    if(now >= c) {
        return false;
    }
    mp[x][now] = mp[x + 1][now] = mp[x + 1][now - 1] = mp[x + 1][now - 2] = 1;
    now_line[x] = now;
    now_line[x + 1] = now;
    return true;
}

bool E(int x)
{
    int now = max({now_line[x] + 1, now_line[x + 1] + 2, now_line[x + 2] + 2});
    if(now >= c) {
        return false;
    }
    mp[x][now] = mp[x + 1][now] = mp[x + 1][now - 1] = mp[x + 2][now - 1] = mp[x + 2][now] = 1;
    now_line[x] = now;
    now_line[x + 1] = now;
    now_line[x + 2] = now;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c >> n;
    int not_use = 0;
    for(int i = 0; i < r; i++) {
        now_line[i] = -1;
    }
    while(n--) {
        char c;
        int x;
        cin >> c >> x;
        if(c == 'A') {
            not_use += (A(x) == 0);
        }
        if(c == 'B') {
            not_use += (B(x) == 0);
        }
        if(c == 'C') {
            not_use += (C(x) == 0);
        }
        if(c == 'D') {
            not_use += (D(x) == 0);
        }
        if(c == 'E') {
            not_use += (E(x) == 0);
        }
    }
    int ans = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(mp[i][j] == 0) {
                ans++;
            }
        }
    }
    cout << ans << ' ' << not_use << '\n';
    return 0;
}
