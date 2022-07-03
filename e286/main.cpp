#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_list[4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> num_list[i][j];
        }
    }
    int a_win = 0, b_win = 0;
    int a_total_1 = 0, b_total_1 = 0;
    for(int i = 0; i < 4; i++)
    {
        a_total_1 += num_list[0][i];
    }
    for(int i = 0; i < 4; i++)
    {
        b_total_1 += num_list[1][i];
    }
    if(a_total_1 > b_total_1)
    {
        a_win += 1;
    }
    else if(a_total_1 < b_total_1)
    {
        b_win += 1;
    }

    int a_total_2 = 0, b_total_2 = 0;

    for(int i = 0; i < 4; i++)
    {
        a_total_2 += num_list[2][i];
    }
    for(int i = 0; i < 4; i++)
    {
        b_total_2 += num_list[3][i];
    }
    if(a_total_2 > b_total_2)
    {
        a_win += 1;
    }
    else if(a_total_2 < b_total_2)
    {
        b_win += 1;
    }

    cout << a_total_1 << ":" << b_total_1 << endl;
    cout << a_total_2 << ":" << b_total_2 << endl;

    if(a_win == 2)
        cout << "Win" << endl;
    else if(b_win == 2)
        cout << "Lose" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}
