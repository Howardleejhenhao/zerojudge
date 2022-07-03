#include <bits/stdc++.h>

using namespace std;

struct ii{
    int x;
    int y;
};

struct Point
{
    int x;
    int y;
    bool operator<(Point b){
        if(x != b.x)return < b.x;
        else return y < b.y;
    }
};

bool cmp(ii i, ii j)
{
    if(i.x == j.x)
    {
        return i.y < j.y;
    }
    else
    {
        return i.x < j.x;
    }
}

int main()
{

    int n;
    cin >> n;
    ii num[n];

    for(int i =  0; i < n;i ++)
    {
        cin >> num[i].x >> num[i].y;
    }

    sort(num, num + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << num[i].x << ' ' << num[i].y << '\n';
    }

    return 0;
}
