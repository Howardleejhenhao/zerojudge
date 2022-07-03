#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    cin >> n;
    vector<int> v(n + 1);
    v[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cout << v[i] - v[i - 1] << ' ';
    }
    cout << '\n';

    return 0;
}
