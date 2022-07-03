#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, s;

    cin >> n >> s;
    int num_list[s][3];
    int leve_up = s / 1000;

    memset(num_list, 0, sizeof(num_list));
    for(int i = 0; i < n; i++)
    {
        cin >> num_list[i][0] >> num_list[i][1];
        if(num_list[i][1] < 30)
        {
            num_list[i][2] = num_list[i][0] + leve_up * 10;
        }
        else if(num_list[i][1] < 40)
        {
            num_list[i][2] = num_list[i][0] + leve_up * 50;
        }
        else
        {
            num_list[i][2] = num_list[i][0] + leve_up * 100;
        }
    }

    int max_num = 0;
    int j;

    for(int i = 0; i < n; i++)
    {
        if(num_list[i][2] > max_num)
        {
            max_num = num_list[i][2];
            j = i;
        }
    }
    cout << j + 1 << " " << num_list[j][2];


    return 0;
}
