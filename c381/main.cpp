#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n, m;
    while(cin >> n >> m && n && m)
    {

        string str;
        while(n--)
        {
            string s;
            cin >> s;
            str += s;
        }
        while(m--)
        {
            int in;
            cin >> in;
            cout << str[in - 1];
        }
        cout << '\n';
    }
    return 0;
}
