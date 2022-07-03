#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int n, m;
    cin >> n >> m;
    vector<set<int>> v(n + 1);
    while(m--)
    {
        int s, t;
        cin >> s >> t;
        v[s].insert(t);
        v[t].insert(s);
    }
    for(int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for(auto it = v[i].begin(); it != v[i].end(); it++) cout << *it << ' ';
        cout << '\n';
    }
    return 0;
}
