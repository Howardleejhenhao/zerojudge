#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int in;
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        int buy_list[2];
        memset(buy_list, 0, sizeof(buy_list));
        cin >> in;
        while(in != 0)
        {
            if(in == a)
            {
                buy_list[0] += 1;
            }
            else if(in == b)
            {
                buy_list[1] += 1;
            }
            else if(in == -a)
            {
                buy_list[0] -= 1;
            }
            else if(in == -b)
            {
                buy_list[1] -= 1;
            }
            cin >> in;
        }
        if(buy_list[0] > 0 && buy_list[1] > 0)
        {
            total += 1;
        }
    }

    cout << total << endl;
    return 0;
}
