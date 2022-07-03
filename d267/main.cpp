#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string str;
    getline(cin, str);
    int v[27];

    while(n--)
    {
        memset(v, 0, sizeof(v));
        getline(cin, str);
        int m = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] > 64 && str[i] < 91)
            {
                v[str[i] - 64] += 1;
                m = max(m, v[str[i] - 64]);
            }
            else if(str[i] > 96 && str[i] < 123)
            {
                v[str[i] - 96] += 1;
                m = max(m, v[str[i] - 96]);
            }
        }
        for(int i = 1; i <= 36; i++)
        {
            if(v[i] == m)
            {
                cout << (char)(i + 96);
            }
        }
        cout << '\n';
    }

    return 0;
}
