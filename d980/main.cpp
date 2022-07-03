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
    for(int i = 1; i <= t; i++)
    {
        vector<ll> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[0] <= 0 || v[0] + v[1] <= v[2])
        {
            cout << "Case " << i << ": Invalid\n";
            continue;
        }
        if(v[0] == v[1] && v[1] == v[2])
        {
            cout << "Case " << i << ": Equilateral\n";
        }
        else if(v[0] == v[1] || v[1] == v[2])
        {
            cout << "Case " << i << ": Isosceles\n";
        }
        else
        {
            cout << "Case " << i << ": Scalene\n";
        }

    }
    return 0;
}
