#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

#define f first
#define s second
#define pb push_back;

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        int ans = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'q')
            {
                if(st.empty()) continue;
                else
                {
                    ans++;
                    st.pop();
                }
            }
            else if(s[i] == 'p')
            {
                st.push(1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
