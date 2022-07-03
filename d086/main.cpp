#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    while(str != "0")
    {
        int flag = 0;
        int total = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if((int)str[i] > 64 && (int)str[i] < 91)
                total += (int)str[i] - 64;
            else if((int)str[i] > 96 && (int)str[i] < 123)
                total += (int)str[i] - 96;
            else
                flag = 1;
        }
        if(flag)
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << total << endl;
        }
        cin >> str;
    }
    return 0;
}
