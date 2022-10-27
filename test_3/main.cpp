#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void output_vector(vector<vector<int>> v, int n) // for debug
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
}

int bfs_cnt_total(vector<vector<int>> v, int n, int start_to_bfs)
{
    queue<int> q;
    int total = 0;
    q.push(start_to_bfs);
    vector<int> now_far(n + 1, -1);
    now_far[start_to_bfs] = 0;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        for(int j = 1; j <= n; j++)
        {
            if(v[now][j] && now_far[j] == -1)
            {
                q.push(j);
                now_far[j] = now_far[now] + 1;
            }
        }
    }
    for(int i = 1; i <= n; i++)
        total += now_far[i];
    return total;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mp(n + 1, vector<int>(n + 1));
    for(int i = 1; i < n; i++)
    {
        mp[i][i + 1] = 1;
        mp[i + 1][i] = 1;
    }
    cout << "此為原始圖形" << '\n';
    output_vector(mp, n);

    int cnt_total = 0;
    for(int i = 1; i <= n; i++)
    {
        cnt_total += bfs_cnt_total(mp, n, i);
    }
    cout << "原始總合為" << cnt_total / 2 << '\n';
    cout << "==========\n";
    cout << "開始加邊" << '\n';

    // 加邊
    vector<vector<int>> cnt_total_all(n + 1, vector<int>(n + 1, 0));
    int cnt_min = INT_MAX;
    for(int i = 1; i < n - 1; i++)
    {
        for(int j = i + 2; j <= n; j++)
        {
            vector<vector<int>> cp = mp;
            cp[i][j] = 1;
            cp[j][i] = 1;
            cout << "加的邊編號為:" << i << ' ' << j << '\n';
            cout << "目前圖案連線狀況為:\n";
            output_vector(cp, n);
            for(int k = 1; k <= n; k++)
            {
                cnt_total_all[i][j] += bfs_cnt_total(cp, n, k);
            }
            cnt_total_all[i][j] /= 2;
            cnt_min = min(cnt_total_all[i][j], cnt_min);
            cout << "此加邊情形後的解為:" << cnt_total_all[i][j] << '\n';
            cout << "==========\n";
        }
    }
    cout << "最佳解為:" << cnt_min << '\n';
    cout << "此線段為:\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            if(cnt_total_all[i][j] == cnt_min)
                cout << i << ' ' << j << '\n';
    }
    cout << "所有邊的連線狀況為:\n";
    output_vector(cnt_total_all, n);


    return 0;
}
