#include <bits/stdc++.h>

using namespace std;

int main()
{

    int num;

    cin >> num;

    int a, b, c;
    int flag;
    for(int i = 0; i < num; i++)
    {
        flag = 0;
        cin >> a >> b >> c;
        for(int j = a + 1; j < b; j++)
        {
            if(j % c == 0);
            else
            {
                cout << j << " ";
                flag += 1;
            }
        }
        if(flag == 0)
        {
            cout << "No free parking spaces.";
        }
        cout << endl;
    }

    return 0;
}
