#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int n[20][20];
int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int r, c;
    cin >> r >> c;
    int total_cnt = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> n[i][j];
            if(n[i][j] == 1) total_cnt++;
        }
    }
    int yes_cnt = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(n[i][j] == 5)
            {
                int this_cnt = 0;
                bool flag = 1;
                vector<pair<int, int>> vp;
                if(n[i - 1][j - 1] == 1 && i - 1 > 0 && j - 1 > 0)
                {
                    this_cnt++;
                    vp.push_back({i - 1, j - 1});
                }
                else if(n[i - 1][j - 1] == 5 && i - 1 > 0 && j - 1 > 0)
                {
                    flag = 0;
                }
                if(n[i - 1][j] == 1 && i - 1 > 0)
                {
                    this_cnt++;
                    vp.push_back({i - 1, j});
                }
                else if(n[i - 1][j] == 5 && i - 1 > 0)
                {
                    flag = 0;
                }
                if(n[i - 1][j + 1] == 1 && i - 1 > 0 && j + 1 < c)
                {
                    this_cnt++;
                    vp.push_back({i - 1, j + 1});
                }
                else if(n[i - 1][j + 1] == 5 && i - 1 > 0 && j + 1 < c)
                {
                    flag = 0;
                }
                if(n[i][j - 1] == 1 && j - 1 > 0)
                {
                    this_cnt++;
                    vp.push_back({i, j - 1});
                }
                else if(n[i][j - 1] == 5 && j - 1 > 0)
                {
                    flag = 0;
                }
                if(n[i][j + 1] == 1 && j + 1 < c)
                {
                    this_cnt++;
                    vp.push_back({i, j + 1});
                }
                else if(n[i][j + 1] == 5 && j + 1 < c)
                {
                    flag = 0;
                }

                if(n[i + 1][j - 1] == 1 && i + 1 < r && j - 1 > 0)
                {
                    this_cnt++;
                    vp.push_back({i + 1, j - 1});
                }
                else if(n[i + 1][j - 1] == 5 && i + 1 < r && j - 1 > 0)
                {
                    flag = 0;
                }
                if(n[i + 1][j] == 1 && i + 1 < r)
                {
                    this_cnt++;
                    vp.push_back({i + 1, j});
                }
                else if(n[i + 1][j] == 5 && i + 1 < r)
                {
                    flag = 0;
                }
                if(n[i + 1][j + 1] == 1 && i + 1 < r && j + 1 < c)
                {
                    this_cnt++;
                    vp.push_back({i + 1, j + 1});
                }
                else if(n[i + 1][j + 1] == 5 && i + 1 < r && j + 1 < c)
                {
                    flag = 0;
                }
                if(flag)
                {
                    yes_cnt += this_cnt;
                    for(int k = 0; k < vp.size(); k++)
                    {
                        //cout << vp[k].first << ' ' << vp[k].second << '\n';
                        n[vp[k].first][vp[k].second] = 0;
                    }
                }
            }
        }
    }
    cout << yes_cnt << ' ' << total_cnt - yes_cnt << '\n';
    return 0;
}
/*

3 3
0 0 0
0 5 0
0 1 0


3 3
5 0 0
5 1 5
0 0 5


4 4
5 0 0 0
0 1 1 0
0 0 0 5
5 1 0 0


5 5
0 0 0 0 0
1 5 1 0 0
0 0 0 5 0
1 5 1 0 0
0 0 0 0 0


10 10
0 1 5 0 0 0 0 0 0 0
5 0 0 0 1 5 0 0 0 0
1 0 0 0 0 0 0 0 5 0
0 0 1 0 0 0 0 5 0 0
0 0 5 0 5 0 1 0 0 0
0 0 0 0 1 0 5 0 0 0
0 1 5 0 5 0 0 0 1 5
0 0 0 1 0 0 0 0 0 0
1 0 0 5 5 1 0 0 0 0
5 0 0 0 0 0 0 1 5 0

*/
