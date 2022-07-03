#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;

    cin >> a >> b;
    for(int i = 0; i < a; i++)
    {
        int total = 0;
        int num_list[b];
        for(int j = 0; j < b; j++)
        {
            cin >> num_list[j];
        }
        int num;
        sort(num_list, num_list + b);
        for(int j = 0; j < b; j++)
        {
            cin >> num;
            if(num > num_list[b / 2])
            {
                for(int h = b / 2 + 1; h < b; h++)
                {
                    if(num == num_list[h])
                    {
                        total += 1;
                        break;
                    }
                }
            }
            else
            {
                for(int h = 0; h < b / 2 + 1; h++)
                {
                    if(num == num_list[h])
                    {
                        total += 1;
                        break;
                    }
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
