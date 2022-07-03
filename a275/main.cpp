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
        int a_list[a.length()], b_list[b.length()];

        for(int i = 0; i < a.length(); i++)
        {
            a_list[i] = a[i];
        }
        for(int i = 0; i < b.length(); i++)
        {
            b_list[i] = b[i];
        }

        for(int i = 0; i < a.length(); i++)
        {
            for(int j = 0; j < b.length(); j++)
            {
                if(a_list[i] == b_list[j])
                {
                    b_list[j] = 0;
                }
            }
        }
        int flag = 1;
        //cout << "-------------" << endl;
        for(int i = 0; i < b.length(); i++)
        {
            //cout << b_list[i] << endl;
            if(b_list[i] != 0)
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
