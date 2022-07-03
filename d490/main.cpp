#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int a, b;
    cin >> a >> b;
    ll ans = 0;
    for(int i = a; i <= b; i++)
    {
        if(i % 2 == 0) ans += i;
    }
    cout << ans << '\n';
    return 0;
}
