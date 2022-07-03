#include <iostream>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

int main()
{
    fastio;
    string str;
    while(cin >> str)
    {
        if(str == "0")
        {
            break;
        }
        int a = 0, b = 0;
        for(int i = 0; i < str.length(); i+=2)
        {
            a += (int)str[i] - 48;
        }
        for(int i = 1; i < str.length(); i+=2)
        {
            b += (int)str[i] - 48;
        }
        if(a - b == 0 || (a - b) % 11 == 0)
        {
            cout << str << " is a multiple of 11.\n";
        }
        else
        {
            cout << str << " is not a multiple of 11.\n";
        }
    }

    return 0;
}
