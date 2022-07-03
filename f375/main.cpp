#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int s, e, a;
    cin >> s >> e >> a;
    int day = 1;
    int time = 0;
    for(int i = 1; i <= 9; i++)
    {
        if(s >= e)
        {
            cout << day << '\n';
            return 0;
        }
        if(i % 3 == 0) s += s / 3;
        else s += s / 10;
        day++;
    }
    a--;
    day = 12;
    while(a)
    {
        if(s >= e) break;
        if(day % 11 == 0) a--;
        if(day % 11 == 1 || day % 11 == 4 || day % 11 == 7)s += s / 3;
        else if(day % 11 < 9) s += s / 10;
        day++;
    }
    if(s >= e)
    {
        cout << day + 1 << '\n';
    }
    else
    {
        cout << "unsalable\n";
    }
    return 0;
}
