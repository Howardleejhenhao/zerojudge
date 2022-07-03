#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

void solve(int n)
{
    string s;
    cin >> s;
    string ans;
    int len = s.length();
    vector<char> v(len / n);
    int i = 0;
    while(i < s.length())
    {
        for(int j = 0; j < len / n; j++)
        {
            v[j] = s[i];
            i++;
        }
        for(int j = len / n - 1; j >= 0; j--)
        {
            ans += v[j];
        }
    }
    cout << ans << '\n';
}

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int n;
    while(cin >> n && n)
    {
        solve(n);
    }
    return 0;
}
