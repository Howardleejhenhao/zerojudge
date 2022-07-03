#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    ll n, m;

    cin >> n >> m;

    vector<ll>num[n];
    int in;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cin >> in;
           num[i].push_back(in);
        }
    }
    for(int i = 0; i < n; i++)
    {
        sort(num[i].begin(), num[i].end(), cmp);
    }

    ll total = 0;
    for(int i = 0; i < n; i++)
    {
        total += num[i][0];
    }
    cout << total << '\n';
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(total % num[i][0] == 0)
        {
            if(flag == 0)
            {
                cout << num[i][0];
            }
            else
            {
                cout << ' ' << num[i][0];
            }
            flag = 1;
        }
    }
    if(!flag)
    {
        cout << "-1\n";
    }


    return 0;
}
