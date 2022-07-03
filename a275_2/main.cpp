#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    getline(cin, a);
    while(a != "STOP!!")
    {
        getline(cin, b);
        int a_list[100] = {0}, b_list[100] = {0};
        for(int i = 0; i < a.length(); i++)
        {

            int num = 0;

            for(int j = 33; j <= 126; j++)
            {
                if(a[i] == j)
                {
                    a_list[j - 33] += 1;
                    num++;
                }
                if(b[i] == j)
                {
                    b_list[j - 33] += 1;
                    num++;
                }
                if(num == 2)
                {
                    break;
                }
            }
        }

        int flag = 1;
        //cout << "-------------" << endl;
        for(int i = 0; i < 94; i++)
        {
            //cout << b_list[i] << endl;
            if(a_list[i] != b_list[i])
            {
                //cout << "flag" < endl;
                flag = 0;
                //cout << flag << endl;
                break;
            }
        }
        //cout << "-------------" << endl;
        //cout << flag << endl;
        if(flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        getline(cin, a);
    }


    return 0;
}
