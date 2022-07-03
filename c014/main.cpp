#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int a, b;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0) break;
        int ans = 0;
        int c = 0;
        while(a > 0 || b > 0)
        {
            int n = a % 10 + b % 10 + c % 10;
            if(n > 9)
            {
                ans++;
                c +=  10;
            }
            a /= 10;
            b /= 10;
            c /= 10;
        }
        if(ans)
        {
            if(ans == 1)
            {
                cout << ans << " carry operation.\n";
            }
            else
            {
                cout << ans << " carry operations.\n";
            }
        }
        else
        {
            cout << "No carry operation.\n";
        }
    }
    return 0;
}
