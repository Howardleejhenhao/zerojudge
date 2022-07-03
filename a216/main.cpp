#include <iostream>
#define ll long long
using namespace std;

ll f(ll n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + f(n - 1);
}

ll g(ll n)
{
    if(n == 1)
    {
        return 1;
    }
    return f(n) + g(n - 1);
}

int main()
{
    ll n;

    while(cin >> n)
    {
        cout << f(n) << ' ' << g(n) << '\n';
    }
    return 0;
}
