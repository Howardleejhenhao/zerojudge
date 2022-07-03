#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    int n;
    string all[10][50];
    int time[10];
    int a = 0;
    for(int i = 1; i <= 9; i++)
    {
        cin >> n;
        time[i] = n;
        for(int j = 0; j < n; j++)
        {
            cin >> all[i][j];
            a++;
        }
    }
    int base[10];
    memset(base, 0, sizeof(base));
    int out;
    cin >> out;
    int out_total = 0;
    int ans = 0;
    for(int j = 0; j < 5; j++)
    {
        for(int i = 1; i < 10; i++)
        {
            if(out_total == out)break;
            if(all[i][j] == "FO" || all[i][j] == "GO" || all[i][j] == "SO")
            {
                out_total++;
                if(out_total % 3 == 0) base[1] = 0, base[2] = 0, base[3] = 0;
            }
            else if(all[i][j] == "1B")
            {

                for(int i = 3; i >= 1; i--)
                {
                    if(base[i] == 1)
                    {
                        base[i] = 0;
                        base[i + 1]++;
                    }
                }
                base[1] = 1;
            }
            else if(all[i][j] == "2B")
            {

                for(int i = 3; i >= 1; i--)
                {
                    if(base[i] == 1)
                    {
                        base[i] = 0;
                        base[i + 2]++;
                    }
                }
                base[2] = 1;
            }
            else if(all[i][j] == "3B")
            {

                for(int i = 3; i >= 1; i--)
                {
                    if(base[i] == 1)
                    {
                        base[i] = 0;
                        base[i + 3]++;
                    }
                }
                base[3] = 1;
            }
            else
            {

                for(int i = 3; i >= 1; i--)
                {
                    if(base[i] == 1)
                    {
                        base[i] = 0;
                        base[i + 4]++;
                    }
                }
                base[4]++;
            }
        }
    }
    for(int i = 4; i < 10; i++)
    {
        ans += base[i];
    }
    cout << ans << '\n';
    return 0;
}
