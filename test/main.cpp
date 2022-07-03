#include <bits/stdc++.h>

using namespace std;

bool g[1000][1000];
bool visit[1000][1000];

queue<pair<int, int>> q;

int main()
{
    int w, h;
    vector<pair<int, int>> v(4);
    v[0] = {1, 0};
    v[1] = {0, 1};
    v[2] = {-1, 0};
    v[3] = {0, -1};

    while(cin >> w >> h)
    {
        memset(g, 0, sizeof(g));
        memset(visit, 0, sizeof(visit));
        int ans = 0;
        for(int i = 0; i < h; i++)
        {
            string s;
            cin >> s;
            for(int j = 0; j < w; j++)
            {
                g[i][j] = s[j] - '0';
            }
        }
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(g[i][j] == 1 && visit[i][j] == 0)
                {
                    q.push({i, j});
                    while(!q.empty())
                    {
                        pair<int, int> now = q.front();
                        q.pop();
                        for(int k = 0; k < 4; k++)
                        {
                            if(visit[now.first + v[k].first][now.second + v[k].second] == 0 && g[now.first + v[k].first][now.second + v[k].second] == 1)
                            {
                                if(now.first + v[k].first >= 0 && now.first + v[k].first < h && now.second + v[k].second >= 0 && now.second + v[k].second < w)
                                {
                                    q.push({now.first + v[k].first, now.second + v[k].second});
                                    visit[now.first + v[k].first][now.second + v[k].second] = 1;
                                }
                            }
                        }
                    }
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
/*

4 3
1001
0110
0010
10 12
0000000000
0100010000
0000010000
0110010000
0011010010
0000010000
1000111000
1010011000
1011001111
1000000000
0001110000
0000000000


3
7

*/
