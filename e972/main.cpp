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

    double n, m;
    char w;
    cin >> n >> m >> w;
    double cost, k;
    if(w == 'U')
    {
        cost = m * 30.9;
        k = 30.9;
    }
    else if(w == 'J')
    {
        cost = m * 0.28;
        k = 0.28;
    }
    else if(w == 'E')
    {
        cost = m * 34.5;
        k = 34.5;
    }
    else
    {
        cost = m;
        k = 1;
    }
    if(cost > n) cout << "No Money\n";
    else
    {
        if((n - cost) / k < 0.05) cout << w << ' ' << "0.00\n";
        else cout << w << ' ' << fixed << setprecision(2) << (n - cost) / k << '\n';
    }

    return 0;
}
