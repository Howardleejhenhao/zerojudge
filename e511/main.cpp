#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i:v) cin >> i;
        sort(v.begin(), v.end());
        cout << 2 * (v[n - 1] - v[0]) << '\n';
    }
    return 0;
}
