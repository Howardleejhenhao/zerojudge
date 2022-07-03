#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)


#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto & i : v) cin >> i;
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                ans++;
            }
        }
    }
    cout << "Optimal train swapping takes " << ans << " swaps." << '\n';
}

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
