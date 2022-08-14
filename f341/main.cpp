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
    string a, b;
    cin >> a >> b;
    int index = 0;
    for(int i = 0; i < a.size(); i++)
    {
        bool flag = 1;
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i + j] != b[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            index = i;
            break;
        }
    }
    //cout << index << '\n';
    for(int i = a.size() - 1; i >= index + b.size(); i--) cout << a[i];
    //cout << '\n';
    //cout << index << '\n';
    cout << b;
    //cout << '\n';
    //cout << index << '\n';
    for(int i = index - 1; i >= 0; i--) cout << a[i];

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
