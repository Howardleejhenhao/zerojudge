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
        int ans = 0;
        while(n > 0)
        {
            ans += n % 10;
            n /= 10;
        }
        if(ans >= 10)
        {
            int a = ans;
            while(a >= 10)
            {
                ans = a;
                a = 0;
                while(ans > 0)
                {
                    a += ans % 10;
                    ans /= 10;
                }
            }
            ans = a;
        }
        cout << ans << '\n';
    }
    return 0;
}
