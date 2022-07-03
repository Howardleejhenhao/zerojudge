#include <iostream>

using namespace std;

int main()
{
    string str;

    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(i == str.length() - 1)
        {
            cout << str[i];
        }
        else
        {
            cout << str[i] << '-';
        }
    }
    cout << '\n';
    return 0;
}
