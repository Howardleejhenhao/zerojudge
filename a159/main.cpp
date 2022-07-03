#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int n = 0, m = 0;
        vector<int> v;
        v.push_back(a / 1000 * 2);
        v.push_back(a / 10 % 10 * 2);
        v.push_back(b / 1000 * 2);
        v.push_back(b / 10 % 10 * 2);
        v.push_back(c / 1000 * 2);
        v.push_back(c / 10 % 10 * 2);
        v.push_back(d / 1000 * 2);
        v.push_back(d / 10 % 10 * 2);
        for(int i = 0; i < 8; i++)
        {
            while(v[i] > 0)
            {
                n += v[i] % 10;
                v[i] /= 10;
            }
        }
        m += a / 100 % 10;
        m += a % 10;
        m += b / 100 % 10;
        m += b % 10;
        m += c / 100 % 10;
        m += c % 10;
        m += d / 100 % 10;
        m += d % 10;
        if((m + n) % 10 == 0)
        {
            cout << "Valid\n";
        }
        else
        {
            cout << "Invalid\n";
        }
    }
    return 0;
}
