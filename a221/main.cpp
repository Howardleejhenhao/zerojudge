#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    cin >> num >> ws;

    for(int i = 0; i < num; i++)
    {
        string input, ans;
        getline(cin, input);
        getline(cin, ans);
        int flag = 0;

        if(input == ans)
        {
            cout << "Case " << i + 1 << ": Yes" << endl;
        }
        else
        {

            for(int j = 0; j < input.length(); j++)
            {
                if(input[j] == ' ' && ans[j] != ' ')
                {
                    flag = 1;
                    break;
                }
                else if(input[j] != ans[j])
                {
                    flag = 2;
                    break;
                }

            }
            if(flag == 1)
            {
                stringstream ss;
                string ano;
                ss << input;
                string aa;
                while(ss >> aa) ano += aa;
                if(ano == ans)
                {
                    cout << "Case " << i + 1 << ": Output Format Error" << endl;
                }
                else
                {
                    cout << "Case " << i + 1 << ": Wrong Answer" << endl;
                }
            }
            else if(flag == 2)
            {
                cout << "Case " << i + 1 << ": Wrong Answer" << endl;
            }
        }


    }
    return 0;
}
