#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;
    if(num <= 2500)
    {
        if(num % 25 == 0)
        {
            cout << "1 " << num / 25 << " " << "25" << endl;
        }
        else
        {
            cout << "1 " << num / 25 + 1 << " " << num % 25 << endl;
        }
    }
    else if(num > 7500)
    {
        if(num % 25 == 0)
        {
            cout << "3 " << (num - 7500) / 25 << " " << "25" << endl;
        }
        else
        {
            cout << "3 " << (num - 7500) / 25 + 1 << " " << (num - 7500) % 25 << endl;
        }
    }
    else // 2500 ~ 7500
    {
        if(num % 50 == 0)
        {
            cout << "2 " << (num - 2500) / 50 << " " << "50" << endl;
        }
        else
        {
            cout << "2 " << (num - 2500) / 50 + 1 << " " << (num - 2500) % 50 << endl;
        }
    }

    return 0;
}
