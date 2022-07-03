#include <iostream>

using namespace std;

int main()
{
    string str;

    cin >> str;
    int a = 0, b = 0;

    for(int i = 0; i < str.length(); i++)
    {

        if(i % 2 == 0)
        {
            a += ((int)str[i] - 48) % 10;
        }
        else
        {
            b += ((int)str[i] - 48) % 10;
        }
    }
    int ans;
    if(a > b)
    {
        ans = a - b;
    }
    else
    {
        ans = b - a;
    }

    cout << ans << endl;
    return 0;
}
