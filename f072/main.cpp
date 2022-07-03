#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

#define f first
#define s second
#define pb push_back;

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int n;
    cin >> n;
    vector<int> v(n);
    int en = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == 1) en = i;
    }
    int ans = 0;
    int c = 0;
    for(int i = 0; i <= en; i++)
    {
        if(v[i] == 1) c++;
        if(c >= 1 && v[i] == 0 && v[i - 1] != 9 && v[i + 1] != 9) ans++;
    }
    cout << ans << '\n';
    return 0;
}
