#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int mto = 0;
    int nto = 0;
    int in;
    for(int i = 0; i < m; i++)
    {
        cin >> in;
        mto += in;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        nto += in;
    }

    if(m <= n)
    {
        cout << "No\n";
        return 0;
    }

    if(mto > nto)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }


    return 0;
}
