#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    double w, h;
    cin >> w >> h;
    h = h / 100;
    cout << fixed << setprecision(1) << (w / pow(h, 2)) << '\n';
    return 0;
}
