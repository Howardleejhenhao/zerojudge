#include <iostream>

using namespace std;

int main()
{

    string str;

    cin >> str;
    int flag = 1;
    if(str.length() % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        for(int i = 0; i < str.length() / 2; i++)
        {

            if(str[i] != str[str.length() - i - 1])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
            for(int i = 0; i < str.length() / 2; i++)
            {
                cout << str[i];
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
