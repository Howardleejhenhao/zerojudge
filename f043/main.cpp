#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll a, b, ans;

    cin >> ans >> b;
    if(b == ans)
    {
        b -= 3;
    }
    a = ans - b;
    if(a > b)swap(a, b);
    cout << a << "+" << b << "=" << ans;
    return 0;
}
