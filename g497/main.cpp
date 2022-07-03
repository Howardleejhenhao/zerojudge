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
    int where = 1;
    int ans = 0;
    while(t--)
    {
        int in;
        cin >> in;
        if(in - where > 0)
        {
            ans += (in - where) * 3;
        }
        else
        {
            ans += (where - in) * 2;
        }
        where = in;
    }
    cout << ans << '\n';
    return 0;
}
