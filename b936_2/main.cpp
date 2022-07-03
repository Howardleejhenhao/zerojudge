#include <iostream>

#define ll long long

using namespace std;

int f(ll a, ll b)
{

    if(a == b)
    {
        return 1;
    }
    else if(a < b) return 0;
    else
    {
        //cout << a << " " << b << endl;
        //cout << "-----" << endl;
        if(a % 2 == 0)
        {
            return 2 * f(a / 2, b);
        }
        else
        {
            return f((a - 1) / 2, b) + f((a + 1) / 2, b);
        }
    }
}

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    ll a, b;

    while(cin >> a >> b)
    {
        cout << f(a, b) << "\n";

    }
    return 0;
}
