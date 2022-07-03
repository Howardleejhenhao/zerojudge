#include <iostream>

using namespace std;

int main()
{
    string str;

    int count_num = 0;
    while(getline(cin, str))
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '"')
            {
                if(count_num % 2 == 0)
                {
                    cout << "``";
                }
                else
                {
                    cout << "''";
                }
                count_num++;

            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
