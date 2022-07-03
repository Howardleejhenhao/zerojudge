#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

map<char, char> mp;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    string s[5] = {"~!@#$%^&*()_+",
    "`1234567890-=",
    "qwertyuiop[]\\",
    "asdfghjkl;'",
    "zxcvbnm,./"};

    for(int i = 0; i < 5; i++)
    {
        for(int j = 2; j < s[i].size(); j++)
        {
            mp[s[i][j]] = s[i][j - 2];
        }
    }
    string in;

    while(getline(cin, in))
    {
        for(int i = 0; i < in.size(); i++)
        {
            if(in[i] == ' ') cout << ' ';
            else cout << mp[in[i]];
        }
        cout << '\n';
    }
    return 0;
}
