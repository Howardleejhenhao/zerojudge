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

string f(int now)
{
    vector<int> a, b;
    int nn = now;
    int cnt = 2;
    while(nn > 1)
    {
        int bb = 0;
        while(nn % cnt == 0)
        {
            bb++;
            nn /= cnt;
        }
        if(bb != 0)
        {
            a.push_back(cnt);
            b.push_back(bb);
        }
        cnt++;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans;
    for(int i = 0; i < a.size(); i++)
    {
        ans += to_string(a[i]) + ' ' + to_string(b[i]) + ' ';
    }
    return ans;
}
void solve()
{
    string s;
    stringstream ss;
    while(getline(cin, s))
    {
        if(s == "0") break;
        ss.clear();
        int a, b;
        ss << s;
        int now = 1;
        while(ss >> a >> b)
        {
            now *= pow(a, b);
        }
        cout << f(now - 1) << '\n';
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
