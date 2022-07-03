#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    while(cin >> n)
    {
        if(!n) break;
        while(1)
        {
            stack<int> st;
            vector<int> v(n);
            cin >> v[0];
            if(v[0] == 0) break;
            for(int i = 1; i < n; i++) cin >> v[i];
            //st.push(1);
            //for(int i = 1; i <= n; i++) st.push(i);
            bool flag = 1;
            int now = 1;
            for(int i = 0; i < n; i++)
            {
                if(!st.empty() && v[i] == st.top())
                {
                    st.pop();
                }
                else if(v[i] >= now)
                {
                    for(int j = now; j < v[i]; j++)
                    {
                        st.push(j);
                    }
                    now = v[i] + 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) cout << "Yes\n";
            else cout << "No\n";
        }
        cout << '\n';
    }
    return 0;
}
