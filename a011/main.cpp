#include <iostream>

using namespace std;

int main()
{
    string str;

    while(getline(cin, str))
    {
        int total = 0;
        int str_Y = 1;
        for(int i = 0; i < str.length() + 1; i++)
        {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                str_Y = 1;
            }
            else
            {
                if(str_Y == 1)
                {
                    total += 1;
                }
                str_Y = 0;
            }

        }
        cout << total << endl;
    }
}
