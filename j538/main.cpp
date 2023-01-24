
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
int mp[30];
int cnt[30];
bool big(char c) { return c >= 'A' && c <= 'Z'; }

void solve()
{
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) {
        if(big(a[i])) a[i] = a[i] - 'A' + 'a';
        mp[a[i] - 'a'] += b[i];
        cnt[a[i] - 'a']++;
    }
    for(int i = a.size() - 1; i >= 0; i--) {
        if(mp[a[i] - 'a'] % cnt[a[i] - 'a'] != 0) {
            b[i] = mp[a[i] - 'a'] / cnt[a[i] - 'a'] + 1;
            mp[a[i] - 'a']--;
        }
        else {
            b[i] = mp[a[i] - 'a'] / cnt[a[i] - 'a'];
        }
    }
    cout << b << '\n';
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
