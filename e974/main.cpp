#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

#define f first
#define s second
#define pb push_back

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int r, c, n;
    cin >> r >> c >> n;

    int ans[r][c];
    int z = 1;
    for(int h = 0; h < r; h++)
    {
        for(int k = 0; k < c; k++)
        {
            ans[h][k] = z;
            z++;
        }
    }
    if(n == 1)
    {
        for(int h = 0; h < r; h++)
        {
            for(int k = 0; k < c; k++)
            {
                cout << ans[h][k] << ' ';
            }
            cout << '\n';
        }
        return 0;
    }

    for(int i = 2; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            for(int h = 0; h < r; h++)
            {
                int temp = ans[h][c - 1];
                for(int k = c - 1; k > 0; k--)
                {
                    ans[h][k] = ans[h][k - 1];
                }
                ans[h][0] = temp;
            }
        }
        else
        {
            for(int h = 0; h < c; h++)
            {
                int temp = ans[r - 1][h];
                for(int k = r - 1; k > 0; k--)
                {
                    ans[k][h] = ans[k - 1][h];
                }
                ans[0][h] = temp;
            }
        }
    }

    for(int h = 0; h < r; h++)
    {
        for(int k = 0; k < c; k++)
        {
            cout << ans[h][k] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
