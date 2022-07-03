#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main()
{
    fastio;
    string a, b;
    while(cin >> a >> b)
    {
        if(b[0] - a[0] >= 0)
        {
            cout << b[0] - a[0] << '\n';
        }
        else
        {
            cout << b[0] - a[0] + 26 << '\n';
        }
    }

    return 0;
}
