#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);
    char c[150][150];
    memset(c, '\0', sizeof(c));
    string s;
    int i = 0;
    int len = 0;
    while(getline(cin, s))
    {
        if(s.length() > len) len = s.length();
        for(int k = 0; k < s.length(); k++)
        {
            c[k][i] = s[k];
        }
        i++;
    }
    for(int j = 0; j < len; j++)
    {
        for(int k = i - 1; k >= 0; k--)
        {
            if(c[j][k] != '\0')
            {
                cout << c[j][k];
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
