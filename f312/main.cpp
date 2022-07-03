#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, b1, b2, c1, c2, n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int x2;
    int max_num = -1000000;
    int y1, y2;
    for(int x1 = 0; x1 <= n; x1++)
    {
        x2 = n - x1;
        y1 = a1 * x1 * x1 + b1 * x1 + c1;
        y2 = a2 * x2 * x2 + b2 * x2 + c2;
        max_num = max(max_num, y1 + y2);
    }


    cout << max_num << endl;
    return 0;
}
