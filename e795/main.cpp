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

#define N 30000000
bool b[N];

using namespace std;

void go()
{
    b[0] = 1;
    b[1] = 1;
    for(int i = 2; i < N; i++)
    {
        if(!b[i])
        {
            for(int j = 2 * i; j < N; j += i)
            {
                b[j] = 1;
            }
        }
    }
}

void test()
{
    int n;
    cin >> n;
    for(int i = 1; i <= 8; i++)
    {
        int now = n;
        now %= ((int)pow(10, i));
        if(b[now])
        {
            cout << n << " isn't a Prime Day!\n";
            return;
        }
    }
    cout <<  n << " is a Prime Day!\n";
}

void solve()
{
    go();
    int q;
    cin >> q;
    while(q--)
    {
        test();
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
