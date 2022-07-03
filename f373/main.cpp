#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    cin >> n;
    //0¤Ñ¤Ñ1¹²¹²
    if(n - 200 * (n / 2000) > n - 100 * (n / 1000))
    {
        cout << n - 100 * (n / 1000)  << ' ' << '1' << '\n';
    }
    else if(n - 200 * (n / 2000) < n - 100 * (n / 1000))
    {
        cout << n - 200 * (n / 2000) << ' ' << '0' << '\n';
    }
    else
    {
        cout << n - 200 * (n / 2000) << ' ' << '0' << '\n';
    }
    return 0;
}
