#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

int main()
{
    fastio;
    string str;
    stringstream ss;
    int n;
    cin >> n;
    getline(cin, str);
    while(n--)
    {
        ss.clear();
        getline(cin, str);
        ss << str;
        int m = 0, f = 0;
        string input;
        int time = 0;
        while(ss >> input)
        {
            time++;
            for(int i = 0; i < 2; i++)
            {
                if(input[i] == 'M')
                {
                    m++;
                }
                else
                {
                    f++;
                }
            }
        }
        if(m == f && time > 1)
        {
            cout << "LOOP\n";
        }
        else
        {
            cout << "NO LOOP\n";
        }
    }
    return 0;
}
