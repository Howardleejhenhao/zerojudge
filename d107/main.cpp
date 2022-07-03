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
    vector<int> v(26, 0);
    for(int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a' + 1]++;
    }
    sort(v.begin(), v.end());
    int m = 0;
    for(int i = 0; i < 26; i++)
    {
        if(v[i] != 0)
        {
            m = v[i];
            break;
        }
    }

    int ans = v[25] - m;
    int flag = 0;
    if(ans == 2)
    {
        cout << "Lucky Word\n" << ans << '\n';
        return 0;
    }
    else if(ans == 1)
    {
        cout << "No Answer\n" << 0 << '\n';
        return 0;
    }
    else if(ans == 3)
    {
        cout << "Lucky Word\n" << ans << '\n';
        return 0;
    }
    else if(ans == 0)
    {
        cout << "No Answer\n" << 0 << '\n';
        return 0;
    }
    for(int i = 2; i <= ans / 2 + 1; i++)
    {
        if(ans % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout << "No Answer\n" << 0 << '\n';
    }
    else
    {
        cout << "Lucky Word\n" << ans << '\n';
    }

    return 0;
}
