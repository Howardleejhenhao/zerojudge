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

#define N 10000
vector<int> v((int)2e4 + 100);
vector<int> place((int)2e4 + 100, -1);

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v[in + N]++;
        if(place[in + N] == -1) place[in + N] = i;
    }
    auto it = max_element(v.begin(), v.end());
    if(*it == 1)
    {
        cout << n << '\n' << "NO\n";
        return;
    }
    vector<pair<int, int>> ans;
    int aa = 0;
    for(int i = 0; i < (int)2e4 + 50; i++)
    {
        aa += v[i] > 0;
        if(*it == v[i])
        {
            //cout << place[i] << ' ' << i - N << '\n';
            ans.push_back({place[i], i - N});
        }
    }
    sort(ans.begin(), ans.end(), cmp);
    cout << aa << '\n';
    for(auto i : ans)
    {
        cout << i.second << ' ';
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
