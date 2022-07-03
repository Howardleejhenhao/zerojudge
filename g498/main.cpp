#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n, m, k;
    cin >> n >> m >> k;
    int i = 0, j = 0;
    bool flag = false;
    while(n * i <= k)
    {
        j = 0;
        while(m * j <= k)
        {
            if(m * j + n * i == k)
            {
                flag = true;
                break;
            }
            j++;
        }
        i++;
    }
    if(flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
