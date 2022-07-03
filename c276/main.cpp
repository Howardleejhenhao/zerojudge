#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int in, a, b, c, d;
    cin >> in;
    vector<int> v(4);
    v[0] = in % 10;
    in /= 10;
    v[1] = in % 10;
    in /= 10;
    v[2] = in % 10;
    in /= 10;
    v[3] = in % 10;
    int t;
    cin >> t;
    while(t--)
    {
        int A = 0, B = 0;
        int in;
        cin >> in;
        int now;
        for(int i = 0; i < 4; i++)
        {
            now = in % 10;
            if(now == v[i]) A++;
            else
            {
                for(int j = 0; j < 4; j++)
                {
                    if(now == v[j])
                    {
                        B++;
                        break;
                    }
                }
            }
            in /= 10;
        }
        cout << A << "A" << B << "B\n";
    }
    return 0;
}
