#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;
    int v[m];
    for(int j = 0; j < n; j++)
    {
        memset(v, 0, sizeof(v));
        int a = 0;

        for(int i = 0; i < m; i++)
        {
            cin >> v[i];
            if(v[i] == 1) a++;

        }
        int flag = 0;
        for(int i = 0; i < m; i++)
        {
            if(v[i] == 1)
            {
                flag++;
                continue;
            }
            else if(v[i] == 0)
            {
                if(flag % 2 == 1 && flag < a)
                {
                    v[i] = 1;
                }
            }
        }
        for(int i = 0; i < m; i++) cout << v[i] << ' ';
        cout << '\n';
    }
    return 0;
}
