#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{

    int num_list[1010];
    int num;

    cin >> num;
    int in;
    memset(num_list, 0, sizeof(num_list));
    for(int i = 0; i < num; i++)
    {
        cin >> in;
        num_list[in] += 1;
    }


    int maxnum;
    maxnum = max(num_list);

    int count_num = 0;

    for(int i = 0; i < num_list.length(); i++)
    {
        if(num_list[i] != 0)
        {
            count_num += 1;
        }
    }
    cout << count_num << endl;

    return 0;
}
