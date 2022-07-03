#include <iostream>

using namespace std;

int main()
{
    int s, t, n, m, r;

    cin >> s >> t >> n >> m >> r;
    int a[s][t];
    int b[n][m];
    int a_sum = 0;
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < t; j++)
        {
            cin >> a[i][j];
            a_sum += a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    int total_time = 0;
    int min_x = 100000000;
    for(int i = 0; i < n - s + 1; i++)
    {
        for(int j = 0; j < m - t + 1; j++)
        {
            int x = 0;
            int wrong_time = 0;
            for(int h = 0; h < s; h++)
            {
                for(int k = 0; k < t; k++)
                {
                    if(a[h][k] != b[h + i][k + j])
                    {
                        wrong_time++;
                    }
                    x += b[h + i][k + j];
                }
            }
            if(wrong_time <= r)
            {
                min_x = min(abs(a_sum - x), min_x);
                total_time++;
            }
        }
    }

    cout << total_time << '\n';
    if(total_time == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << min_x << '\n';
    }

    return 0;
}
