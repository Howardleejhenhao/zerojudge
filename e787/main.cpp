#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int your[n][m];
    int num[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> your[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int cou = 0;
            for(int k = 0; k < n; k++)
            {
                if(num[k][j] == 1)
                {
                    cou++;
                }
            }
            for(int k = 0; k < m; k++)
            {
                if(num[i][k] == 1 && k != j)
                {
                    cou++;
                }
            }
            if(cou % 2 == 1)
            {
                your[i][j] = 1 - your[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << your[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
