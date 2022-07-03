#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int h, w, x1, x2, y1, y2;
    cin >> h >> w >> y1 >> x1 >> y2 >> x2;
    cin.ignore();
    string str[h];
    for(int i = 0; i < h; i++)
    {
        getline(cin, str[i]);
    }

    if(x1 == x2)
    {
        for(int i = y1 - 1; i < y2; i++)
        {
            cout << str[i][x1 - 1];
        }
    }
    else if(y1 == y2)
    {
        for(int i = x1 - 1; i < x2; i++)
        {
            cout << str[y1 - 1][i];
        }
    }
    else
    {
        int i = x1 - 1;
        y1--;
        while(i != x2)
        {
            //cout << y1 << ' ' << i << '\n';
            cout << str[y1][i];
            y1++;
            i++;
        }

    }
    return 0;
}
