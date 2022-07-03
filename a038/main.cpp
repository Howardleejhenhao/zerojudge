#include <iostream>

using namespace std;

int main()
{
    string str;
    string out;
    out = "";

    int TF = 1;
    cin >> str;
    for(int i = str.length() - 1; i > -1; i--)
    {
        if(TF)
        {
            if(str[i] == '0')
            {
                cout << "";
            }
            else
            {
                out += str[i];
                TF = 0;
            }
        }
        else
        {
            out += str[i];
        }
    }
    if(out == "")
    {
        cout << "0" << endl;
    }
    else
    {
        cout << out << endl;
    }

    return 0;
}
