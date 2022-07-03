#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        int num_list[2][7];
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 7; k++)
            {
                cin >> num_list[j][k];
            }
        }
        int flag = 1;

        for(int j = 0; j < 2; j++)
        {
            if(num_list[j][1] != num_list[j][3] && num_list[j][1] == num_list[j][5]);
            else
            {
                cout << "A";
                flag = 0;
                break;
            }
        }

        if(num_list[0][6] == 1 && num_list[1][6] == 0);
        else
        {
            cout << "B";
            flag = 0;
        }
        if(num_list[0][1] != num_list[1][1] && num_list[0][3] != num_list[1][3] && num_list[0][5] != num_list[1][5]);
        else
        {
            cout << "C";
            flag = 0;
        }
        if(flag)
        {
            cout << "None";
        }
        cout << endl;
    }


    return 0;
}
