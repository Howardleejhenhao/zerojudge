#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

bool di[1000010];
int main()
{
    fastio;

    set<int> s;
    //memset(di, 0, sizeof(di));
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) s.insert(i);
    int in;
    while(m--)
    {
        cin >> in;
        if(di[in])
        {
            cout << "0u0 ...... ?\n";
        }
        else
        {
            int i = in + 1;
            while(1)
            {
                if(i > n)
                {
                    cout << "0u0 ...... ?\n";
                    break;
                }
                if(di[i] == 0)
                {
                    cout << i << '\n';
                    di[i] = 1;
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}
