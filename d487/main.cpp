#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

ll ans;

void f(int n)
{
    if(n == 0) cout << "1 = " << ans << '\n';
    if(n > 0)
    {
        if(n == 1)
        {
            cout << "1 = " << ans << '\n';
        }
        else
        {
            ans *= n;
            cout << n << " * ";
            return f(n - 1);
        }
    }
}

int main()
{
    fastio;

    int n;
    while(cin >>n)
    {
        ans = 1;
        cout << n << "! = ";
        f(n);
    }
    return 0;
}
