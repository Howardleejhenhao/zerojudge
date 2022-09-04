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
    string s;
    getline(cin, s);
    int cnt[60] = {0};
    for(char i : s)
    {
        if(i >= 'a' && i <= 'z') cnt[i - 'a']++;
        if(i >= 'A' && i <= 'Z') cnt[i - 'A']++;
    }
    int m = *max_element(cnt, cnt + 30);
    for(int i = 0; i < 30; i++)
    {
        if(cnt[i] == m)
        {
            cout << (char)(i + 'a');
        }
    }
    cout << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    string sss;
    getline(cin, sss);
    while(t--)
    {
        solve();
    }
    return 0;
}
