#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, px, py;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> px >> py;
    if(x2 < x1)
    {
        swap(x1, x2);
    }
    if(x4 < x3)
    {
        swap(x3, x4);
    }
    if(y2 < y1)
    {
        swap(y1, y2);
    }
    if(y4 < y3)
    {
        swap(y3, y4);
    }

    int ans;
    int in_big = 0, in_small = 0;
    if(px > x1 && px < x2)
    {
        if(py > y1 && py < y2)
        {
            in_big = 1;
        }
    }

    if(px > x3 && px < x4)
    {
        if(py > y3 && py < y4)
        {
            in_small = 1;
        }
    }

    if(in_big)
    {
        if(in_small)
        {

            ans = 0;
        }
        else
        {
            ans = 1;
        }
    }
    else
    {
        ans = 2;
    }



    cout << ans << endl;
    return 0;
}
