#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> mp(50);
vector<int> ans[100100];
vector<int> pre(6);
int cnt = 0;

void dfs(int x)
{
    if(x == 6)
    {
        for(int i = 0; i < 6; i++)
        {
            ans[cnt].push_back(pre[i]);
        }
        cnt++;
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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        mp[in]++;
    }
    dfs(0);
    for(int i = 0; i < cnt; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
