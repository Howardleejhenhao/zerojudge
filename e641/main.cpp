#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m;
    m['B'] = 1, m['F'] = 1, m['P'] = 1, m['V'] = 1;
    m['C'] = 2, m['G'] = 2, m['J'] = 1, m['K'] = 2, m['Q'] = 2, m['S'] = 2, m['X'] = 2, m['Z'] = 2;
    m['D'] = 3, m['T'] = 3;
    m['L'] = 4;
    m['M'] = 5, m['N'] = 5;
    m['R'] = 6;

    string str;
    while(cin >> str)
    {
        int n = 10;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'H' && str[i] != 'W' && str[i] != 'Y' && n != m[str[i]])
            {
                cout << m[str[i]];
                n = m[str[i]];
            }
        }
        cout << '\n';

    }
    return 0;
}
