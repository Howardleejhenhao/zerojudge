#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num, big, small;
    big = 100;
    small = 0;
    cin >> num;
    int num_list[num];
    for(int i = 0; i < num; i++)
    {
        cin >> num_list[i];
    }
    sort(num_list, num_list + num);

    for(int i = 0; i < num; i++)
    {
        cout << num_list[i] << " ";
    }
    cout << endl;
    int flag = 0;
    for(int i = 0; i < num; i++)
    {
        if(num_list[i] < 60 && num_list[i] >= small)
        {
            small = num_list[i];
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout << "best case" << endl;
    }
    else
    {
        cout << small << endl;
    }
    flag = 0;

    for(int i = 0; i < num; i++)
    {
        if(num_list[i] >= 60 && num_list[i] <= big)
        {
            big = num_list[i];
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout << "worst case" << endl;
    }
    else
    {
        cout << big << endl;
    }
    return 0;
}
