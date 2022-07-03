#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define f first
#define s second

using namespace std;

int main()
{
    fastio;
    pair<string, int> p[10];
    int n;
    cin >> n;
    int c = 0;
    while(n--)
    {

        c++;
        int m = 0;
        for(int i = 0; i < 10; i++)
        {
            cin >> p[i].first >> p[i].second;
            m = max(m, p[i].second);
        }
        cout << "Case #" << c << ":\n";
        for(int i = 0; i < 10; i++)
        {
            if(p[i].second == m)
            {
                cout << p[i].first << '\n';
            }
        }
    }

    return 0;
}
