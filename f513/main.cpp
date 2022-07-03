#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int num_list[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> num_list[i][j];
        }
    }

    int total = 0;
    int num;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            int flag = 1;
            if(num_list[i][j] == 1)
            {
                num = 2;
            }
            else
            {
                num = 1;
            }
            for(int h = -1; h < 2; h++)
            {
                if(i - 1 < 0 || i - 1 >= a || j + h < 0 || j + h >= b);
                else if(num_list[i - 1][j + h] == num)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                if(i < 0 || i >= a || j - 1 < 0 || j - 1 >= b);
                else if(num_list[i][j - 1] == num_list[i][j + 1] && num_list[i][j + 1] == num)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }
            if(flag)
            {
                for(int h = -1; h < 2; h++)
                {
                    if(i + 1 < 0 || i + 1 >= a || j + h < 0 || j + h >= b);
                    else if(num_list[i + 1][j + h] == num)
                    {
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }

            }
            if(flag)
            {
                if(num_list[i][j] != num)
                {
                    total += 1;
                }
            }
        }
    }

    cout << total << endl;
    return 0;
}
