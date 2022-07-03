#include <bits/stdc++.h>

using namespace std;

int num_list[10000];

int main()
{
    int num;
    int temp;
    while(cin >> num)
    {
        for(int i = 0; i < num; i++)
        {
            cin >> num_list[i];
        }
        for(int j = num - 1; j > 0; j--)
        {
            for(int i = 0; i <= j - 1; i++)
            {
                if(num_list[i] > num_list[i + 1])
                {
                    temp = num_list[i];
                    num_list[i] = num_list[i + 1];
                    num_list[i + 1] = temp;
                }
            }
        }
        for(int i = 0; i < num; i++)
        {
            cout << num_list[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
