#include <iostream>

using namespace std;

int main()
{
    string str = "";
    char b;

    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        cout << str << endl;
        b = str[0];
        for(int j = 0; j < str.length() - 1; j++)
        {
            str[j] = str[j + 1];
        }
        str[str.length() - 1] = b;
    }

    return 0;
}
