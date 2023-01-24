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
string tea;
string in;

bool cmp(char a, char b)
{
    int aa, bb;
    for(int i = 0; i < tea.size(); i++) {
        if(tea[i] == a) aa = i;
        if(tea[i] == b) bb = i;
    }
    return aa < bb
}

void solve()
{
    cin >> tea >> in;
    sort(in.begin(), in.end(), cmp);
    int q;
    cin >> q;
    while(q--) {
        int now;
        cin >> now;
        cout << in[now - 1] << '\n';
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
