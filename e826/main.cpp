#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vp(n);
    for(int i = 0; i < n; i++)
    {
        vp[i].first = 0;
        vp[i].second = i;
    }


    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        vp[a].first += b;
    }

    sort(vp.begin(), vp.end(), cmp);
    for(int i = 0; i < n; i++)
    {
        cout << vp[i].second << ' ' << vp[i].first << '\n';
    }


    return 0;
}
