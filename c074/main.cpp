#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> mp(50);
vector<int> pre(6);

void dfs(int x)
{
    if(x == 6)
    {
        cout << pre[0];
        for(int i = 1; i < 6; i++)
        {
            cout << ' ' << pre[i];
        }
        cout << '\n';
        return;
    }
    for(int i = 0; i < 50; i++)
    {
        if(mp[i] != 0)
        {
            mp[i]--;
            pre[x] = i;
            if(x != 0)
            {
                if(pre[x] >= pre[x - 1])
                {
                    dfs(x + 1);
                }
            }
            else
            {
                dfs(x + 1);
            }
            mp[i]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    stringstream ss;
    int flag = 0;
    while(getline(cin, s))
    {
        if(s == "0") break;
        if(flag) cout << '\n';
        ss.clear();
        int n;
        ss << s;
        ss >> n;
        for(int i = 0; i < mp.size(); i++) mp[i] = 0;
        while(ss >> n)
        {
            mp[n]++;
        }
        dfs(0);
        flag++;
    }
    return 0;
}


