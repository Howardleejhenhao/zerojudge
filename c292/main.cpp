#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int which;
    cin >> which;
    vector<vector<int>> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
        v[i].push_back(0);
        for(int j = 1; j <= n; j++)
        {
            int in;
            cin >> in;
            v[i].push_back(in);
        }
    }
    int x = n / 2 + 1;
    int y = x;
    int cou = 1;
    int timer = 0;
    int where = which;
    cout << v[y][x];

    for(int i = 0; i < 2; i++)
    {
        //cout << i << endl;
        while(timer != cou)
        {

            if(where == 0)y--;
            else if(where == 1) x--;
            else if(where == 2) y++;
            else x++;
            timer++;
            //cout << y << ' ' << x << endl;
            cout << v[x][y];
        }
        if(where == 3) where = 0;
        else where++;
        timer = 0;
    }
    cou++;
    int three_timer = 0;
    int i = 1;
    //cout << endl;
    while(i < n * n - 3)
    {
        while(timer < cou)
        {
            i++;
            if(where == 0)y--;
            else if(where == 1) x--;
            else if(where == 2) y++;
            else x++;
            timer++;
            //cout << x << ' ' << y << endl;
            //cout << y << ' ' << x << endl;
            cout << v[x][y];
        }
        if(where == 3) where = 0;
        else where++;
        timer = 0;
        three_timer++;
        if(three_timer % 2 == 0)
        {
            if(cou != n - 1) cou++;
            three_timer = 0;
        }
    }
    return 0;
}
