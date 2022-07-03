#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int b = v[n];
    int mx = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % b == 1) mx += v[i];
    }
    int m;
    if(mx % n == 0) cout << n << ' ' << v[n] << '\n';
    else cout << mx % n << ' ' << v[mx % n] << '\n';
    return 0;
}
