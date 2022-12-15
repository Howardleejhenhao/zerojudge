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
map<string, char> m;
void solve()
{
    m["0 1 0 1"] = 'A';
    m["0 1 1 1"] = 'B';
    m["0 0 1 0"] = 'C';
    m["1 1 0 1"] = 'D';
    m["1 0 0 0"] = 'E';
    m["1 1 0 0"] = 'F';
    int n;
    while(cin >> n) {
        string ss;
        getline(cin, ss);
        while(n--) {
            string s;
            getline(cin, s);
            cout << m[s];
        }
        cout << '\n';
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
