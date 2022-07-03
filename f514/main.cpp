#include <iostream>

using namespace std;

int main()
{
    string in;
    cin >> in;
    int str_list[in.length()][2];
    for(int i = 0; i < in.length(); i++)
    {
        str_list[i][0] = (int)in[i];
    }
    for(int i = 0; i < in.length(); i++)
    {
        str_list[i][1] = 0;
    }
    string in_2;
    cin >> in_2;
    int str_list_2[in_2.length()];
    for(int i = 0; i < in_2.length(); i++)
    {
        str_list_2[i] = (int)in_2[i];
    }

    for(int i = 0; i < in_2.length(); i++)
    {
        int flag = 0;
        for(int j = 0; j < in.length(); j++)
        {
            if(str_list_2[i] == str_list[j][0])
            {
                if(str_list[j][1] == 1);
                else
                {
                    cout << j + 1 << " ";
                    str_list[j][1] = 1;
                    flag = 1;
                    break;

                }
            }
        }
        if(!flag)
        {
            cout << "X ";
        }
    }
    return 0;
}
