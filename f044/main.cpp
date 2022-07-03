#include <bits/stdc++.h>

using namespace std;

int num(int day)
{
    if(day == 1) return 1;
    else return num(day - 1) * 2 + 1;
}

int main()
{
    int a, total;

    cin >> a >> total;

    int g;
    g = __gcd(a, total);

    if(g != 1)
    {
        a /= g;
        total /= g;
    }
    int day = 1;
    while(1)
    {
        if(total <= a * num(day))
        {
            break;
        }
        day++;
    }
    if(total == 0)
    {
        cout << "0\n";
        return 0;
    }
    cout << day << '\n';
    return 0;
}
