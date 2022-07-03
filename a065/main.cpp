#include <iostream>

using namespace std;

int main()
{
    string str;

    while(cin >> str)
    {
        for(int i = 0; i < str.length() - 1; i++)
        {
            if(((int)str[i + 1] - (int)str[i]) > 0)
                cout << (int)str[i + 1] - (int)str[i];
            else
                cout << -((int)str[i + 1] - (int)str[i]);

        }
        cout << endl;
    }

    return 0;
}
