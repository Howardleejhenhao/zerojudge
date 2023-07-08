#include <iostream>

using namespace std;

int main()
{

    string str;
    int num;
    int TF = 0;
    char c1 = ' ';
    int total = 0;
    while(cin >> num)
    {
        cin >> str;
        string ans;
        c1 = str[0];
        total = 0;
        if(str.length() == 1)
        {
            ans += '1' + str[0];
        }
        else
        {
            for(int i = 0; i < str.length(); i++)
            {

                if(c1 == str[i])
                {
                    total += 1;
                    if(i == str.length() - 1)
                    {
                        if(total == 2)
                        {
                            ans += to_string(total) + c1;
                        }
                        else
                        {
                            ans += to_string(total) + c1;
                        }
                    }
                }
                else
                {

                    if(total > 2)
                    {
                        ans += to_string(total) + c1;
                        TF = 0;
                        c1 = str[i];
                        total = 1;
                        if(i == str.length() - 1)
                        {
                            if(total == 1)
                            {
                                ans += to_string(total) + str[i];
                            }
                            break;
                        }
                    }
                    else if(total == 1)
                    {
                        ans += to_string(total) + c1;
                        TF = 0;
                        c1 = str[i];
                        total = 1;
                        if(i == str.length() - 1)
                        {
                            if(total == 1)
                            {
                                ans += to_string(total) + str[i];
                            }
                            break;
                        }
                    }
                    else
                    {
                        ans += to_string(total) + c1;
                        TF = 0;
                        c1 = str[i];
                        total = 1;
                        if(i == str.length() - 1)
                        {
                            if(total == 1)
                            {
                                ans += to_string(total) + str[i];
                            }
                            break;
                        }
                    }
                }
            }
        }
        if(ans.size() < str.size()) cout << ans << '\n';
        else cout << str << '\n';
    }
    return 0;
}
