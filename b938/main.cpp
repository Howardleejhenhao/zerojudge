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
            auto iter = s.upper_bound(in);
            if(iter == s.end())
            {
                cout << "0u0 ...... ?\n";
            }
            else
            {
                cout << *iter << '\n';
                di[*iter] = 1;
                s.erase(iter);
            }
        }
    }
    return 0;
}
