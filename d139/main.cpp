#include <iostream>

using namespace std;

int main()
{

    string str;
    int TF = 0;
    char c1 = ' ';
    int total = 0;
    while(cin >> str)
    {
        c1 = str[0];
        total = 0;
        if(str.length() == 1)
        {
            cout << str[0] << endl;
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
                            cout << c1 << c1;
                        }
                        else
                        {
                            cout << total << c1;
                        }
                    }
                }
                else
                {

                    if(total > 2)
                    {
                        cout << total << c1;
                        TF = 0;
                        c1 = str[i];
                        total = 1;
                        if(i == str.length() - 1)
                        {
                            if(total == 1)
                            {
                                cout << str[i];
                            }
                            break;
                        }
                    }
                    else if(total == 1)
                    {
                        cout << c1;
                        TF = 0;
                        c1 = str[i];
                        total = 1;
                        if(i == str.length() - 1)
                        {
                            if(total == 1)
                            {
                                cout << str[i];
                            }
                            break;
                        }
                    }
                    else
                    {
                        cout << c1 << c1;
                        TF = 0;
                        c1 = str[i];
                        total = 1;
                        if(i == str.length() - 1)
                        {
                            if(total == 1)
                            {
                                cout << str[i];
                            }
                            break;
                        }
                    }


                }

            }
            cout << endl;

        }
    }

    return 0;
}
