#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

#define f first
#define s second
#define pb push_back

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int n;
    cin >> n;
    vector<int> v(n);
    for(auto & i : v) cin >> i;
    int t;
    cin >> t;
    int i = t - 1;
    if(t == n)
    {
        for(i = t - 1; i >= 0; i--)
        {
            if(v[i] < v[i - 1]) break;
        }
    }
    else if(t == 1)
    {
        for(i = t - 1; i < n; i++)
        {
            if(v[i] < v[i + 1]) break;
        }
    }
    else if(v[i - 1] > v[i + 1])
    {
        for(i = t - 1; i < n; i++)
        {
            if(v[i] < v[i + 1]) break;
        }
    }
    else
    {
        for(i = t - 1; i >= 0; i--)
        {
            if(v[i] < v[i - 1]) break;
        }
    }
    cout << i + 1 << '\n';
    return 0;
}
