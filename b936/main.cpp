#include <iostream>

#define ll long long

using namespace std;

ll count_num;

void f(ll a, ll b)
{

    if(a <= b)
    {
        if(a == b)count_num++;
        return;
    }
    else
    {
        //cout << a << " " << b << endl;
        //cout << "-----" << endl;
        if(a % 2 == 0)
        {
            if(a == b)count_num += 1;
            f(a / 2, b);
            f(a / 2, b);
        }
        else
        {
            if(a == b)count_num += 1;
            f((a - 1) / 2, b);
            f((a + 1) / 2, b);
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
        count_num = 0;
        f(a, b);

        cout << count_num << "\n";

    }
    return 0;
}
