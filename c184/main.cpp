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
        if(!n) break;
        int ans = 0;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                ans += i;
            }
        }
        if(ans == n) cout << "=" << n << '\n';
        else
        {
            int a = 0;
            for(int i = 1; i < ans; i++)
            {
                if(ans % i == 0)
                {
                    a += i;
                }
            }
            if(a == n)
            {
                cout << ans << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}
