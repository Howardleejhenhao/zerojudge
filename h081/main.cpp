#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

#define pb push_back

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(auto & i : v) cin >> i;
    int x = v[0];
    int ans = 0;
    int last;
    for(int i = 1; i < n; i++)
    {
        if(x == -1)
        {
            if(v[i] <= last - d)
            {
                x = v[i];
            }
        }
        else
        {
            if(v[i] >= x + d)
            {
                ans += v[i] - x;
                x = -1;
                last = v[i];
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
