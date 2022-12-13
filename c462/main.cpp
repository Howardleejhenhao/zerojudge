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

bool is(char c)
{
    return c >= 'A' && c <= 'Z';
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int this_ans = 0;
    int tmp = is(s[0]);
    bool last = false;
    int now = 1;
    for(int i = 1; i < s.size(); i++) {
        if(tmp == is(s[i])) {
            now++;
        }
        else {
            if(now == n) {
                if(last) {
                    this_ans += now;
                    ans = max(ans, this_ans);
                }
                else {
                    this_ans = now;
                    ans = max(ans, this_ans);
                }
                last = true;
            }
            else if(now > n) {
                if(last) {
                    this_ans += n;
                    ans = max(ans, this_ans);
                    last = false;
                }
                else {
                    this_ans = n;
                    ans = max(ans, this_ans);
                    last = true;
                }
            }
            else{
                last = false;
            }
            now = 1;
            tmp = is(s[i]);
        }
        // cout << i << ' ' << now << ' ' << tmp << '\n';
    }
    if(now == n) {
        if(last) {
            this_ans += now;
            ans = max(ans, this_ans);
        }
        else {
            this_ans = now;
            ans = max(ans, this_ans);
        }
        last = true;
    }
    else if(now > n) {
        if(last) {
            this_ans += n;
            ans = max(ans, this_ans);
            last = false;
        }
        else {
            this_ans = n;
            ans = max(ans, this_ans);
            last = true;
        }
    }
    else{
        last = false;
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
