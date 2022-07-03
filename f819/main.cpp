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
    vector<int> late;
    int ans = 0;
    while(n--)
    {
        int s, d;
        cin >> s >> d;
        if(d > 100)
        {
            late.pb(s);
            ans += (d - 100) * 5;
        }
    }
    if(late.size() == 0) cout << "0\n";
    else
    {
        sort(late.begin(), late.end());
        for(int i : late) cout << i << ' ';
        cout << '\n';
        cout << ans << '\n';
    }
    return 0;
}
