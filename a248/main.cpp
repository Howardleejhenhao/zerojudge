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
    int a, b, n;
    while(cin >> a >> b >> n)
    {
        cout << a / b;
        if(n == 0)
        {
            continue;
            cout << '\n';
        }

        cout << '.';

        for(int i = 1; i <= n; i++)
        {
            a %= b;
            a *= 10;
            cout << a / b;
        }
        cout << '\n';
    }
    return 0;
}
