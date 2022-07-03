#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

ll ans = 0;
void f(ll a)
{
    if(a == 1)
    {
        ans++;
        return;
    }
    else
    {
        ans++;
        f(a - 1);
    }
}

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--)
    {
        ans = 0;
        ll n;
        cin >> n;
        f(n);
        cout << ans << '\n';
    }
    return 0;
}
