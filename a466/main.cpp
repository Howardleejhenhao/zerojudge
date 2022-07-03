#include <iostream>

using namespace std;

int main()
{

    string str;
    string one = "one";
    int n;

    cin >> n;
    while(n--)
    {
        cin >> str;
        if(str.length() == 5)
        {
            cout << 3 << '\n';
        }
        else
        {
            int flag = 0;
            for(int i = 0; i < 3; i++)
            {
                if(str[i] == one[i])
                {
                    flag++;
                }
            }
            if(flag >= 2)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 2 << '\n';
            }
        }
    }

    return 0;
}
