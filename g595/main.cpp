#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int a = 0;
    int total = 0;
    cin >> num;
    int num_list[100];
    num_list[0] = 0;

    for(int i = 0; i < num; i++)
    {
        cin >> a;
        num_list[i] = a;
    }
    for(int j = 1; j < num - 1; j++)
    {


        if(num_list[j] == 0)
        {
            if(num_list[j + 1] > num_list[j - 1])
            {
                total += num_list[j - 1];
            }
            else
            {
                total += num_list[j + 1];
            }
        }
    }

    if(num_list[0] == 0)
    {
        total += num_list[1];
    }
    if(num_list[num - 1] == 0)
    {
        total += num_list[num - 2];

    }
    cout << total << endl;
    return 0;
}
