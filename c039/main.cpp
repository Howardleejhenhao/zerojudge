#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j;
    while(cin >> i >> j)
    {
        //cout << 'n' << endl;

        int mx = 0;
        for(int h = min(i, j); h <= max(i, j); h++)
        {
            int n = h;
            int x = 1;
            while(n != 1)
            {

                if(n % 2)n = 3 * n + 1;
                else n /= 2;
                x++;
            }
            mx = max(x, mx);
        }
        cout << i << ' ' << j << ' ' << mx << '\n';

    }
    return 0;
}
