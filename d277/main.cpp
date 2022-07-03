#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    while(cin >> n)
    {
        cout << ((n % 2 == 0) ? n : n - 1) << '\n';
    }
    return 0;
}
