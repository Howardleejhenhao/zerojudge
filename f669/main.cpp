#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    string s;
    cin >> s;
    for(int i = (int)s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << '\n';
    return 0;
}
