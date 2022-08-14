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
    cout << "十六進位表示法  相對應的十進位表示法" << '\n';
    string s;
    while(cin >> s)
    {
        cout << "      " << s;
        int a = 0;
        swap(s[0], s[1]);
        for(int i = 0; i < 2; i++)
        {
            if(s[i] < 64)
            {
                a += (s[i] - '0') * pow(16, i);
            }
            else
            {
                a += (s[i] - 'A' + 10) * pow(16, i);
            }
        }
        cout << "                 " << a << '\n';
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
