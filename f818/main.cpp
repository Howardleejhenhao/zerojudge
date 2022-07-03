#include <iostream>

using namespace std;

int main()
{

    int num;
    cin >> num;

    int num_list[num][3];

    for(int i = 0; i < num; i++)
    {
        cin >> num_list[i][0];
    }
    for(int i = 0; i < num; i++)
    {
        cin >> num_list[i][1];
    }
    for(int i = 0; i < num; i++)
    {
        num_list[i][2] = num_list[i][0] * num_list[i][1];
    }

    int small = 1000000;
    int index;
    for(int i = 0; i < num; i++)
    {
        if(num_list[i][2] < small)
        {
            index = i;
            small = num_list[i][2];
        }
    }

    cout << num_list[index][0] << " " << num_list[index][1] << endl;
    return 0;
}
