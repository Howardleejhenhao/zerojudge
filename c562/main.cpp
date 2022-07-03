#include <iostream>

using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
        if(n == 0)
        {
            cout << 1 << '\n';
            continue;
        }
        int ans = 0;
        while(n > 0)
        {
            int a = n % 10;
            if(a == 0) ans++;
            else if(a == 6) ans++;
            else if(a == 8) ans += 2;
            else if(a == 9) ans ++;
            n /= 10;
        }
        cout << ans << '\n';
    }

    return 0;
}
