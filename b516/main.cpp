#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < str.length(); j++)
        {

            str[j] += 3;
            if(str[j] > 'Z')
            {
                str[j] -= 26;
            }

        }
        cout << str << endl;
    }
    return 0;
}
