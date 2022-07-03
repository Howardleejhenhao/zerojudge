#include <iostream>

using namespace std;

int main()
{
    //幸運數字:3
    //整數:5
    //對應金額:5

    int lucky_num[3];
    int your_num[5];
    int money[5];

    for(int i = 0; i < 3; i++)
    {
        cin >> lucky_num[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cin >> your_num[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cin >> money[i];
    }

    int total = 0;
    int flag = 0;
    int index;
    for(int i = 0; i < 5; i++)
    {
        if(your_num[i] == lucky_num[0])
        {
            total += money[i];
        }
        if(your_num[i] == lucky_num[1])
        {
            total += money[i];
        }
        if(your_num[i] == lucky_num[2])
        {
            flag = 1;
            index = i;
        }
    }

    if(flag == 1)
    {
        total -= money[index];
        if(total > 0)
        {
            cout << total << endl;
        }
        else
        {
            cout << "0" << endl;

        }
    }
    else
    {
        cout << total * 2 << endl;
    }

    return 0;
}
