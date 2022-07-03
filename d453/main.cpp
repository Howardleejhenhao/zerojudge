#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

void solve()
{
    int n, m, n1, m1, n2, m2;
    cin >> n >> m >> n1 >> m1 >> n2 >> m2;
    int adj[n][m];
    n1--;
    m1--;
    n2--;
    m2--;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            adj[i][j] = s[j] - '0';
        }
    }
    int arr[n][m];
    memset(arr, -1, sizeof(arr));
    queue<pair<int, int>> q;
    q.push({n1, m1});
    arr[n1][m1] = 1;
    vector<pair<int, int>> go(4);
    go[0] = {0, 1};
    go[1] = {0, -1};
    go[2] = {1, 0};
    go[3] = {-1, 0};
    while(!q.empty())
    {
        pair<int, int> now;
        now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            if(adj[now.first + go[i].first][now.second + go[i].second] == 0 && arr[now.first + go[i].first][now.second + go[i].second] == -1)
            {
                if(now.first + go[i].first >= 0 && now.first + go[i].first < n && now.second +go[i].second >= 0 && now.second +go[i].second < m)
                {
                    q.push({now.first + go[i].first, now.second + go[i].second});
                    arr[now.first + go[i].first][now.second + go[i].second] = arr[now.first][now.second] + 1;
                }
            }
        }
    }
    if(arr[n2][m2] == -1)
    {
        cout << "0\n";
    }
    else
    {
        cout << arr[n2][m2] << '\n';
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int time;
    while(cin >> time)
    {
        while(time--)
        {
            solve();
        }
    }
    return 0;
}
