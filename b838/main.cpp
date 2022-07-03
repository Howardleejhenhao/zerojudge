#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<char> s;
    while(n--)
    {
        string str;
        cin >> str;
        int total = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(')
            {
                s.push(1);
                total++;
            }
            else
            {
                s.pop();
            }
        }
        if(s.empty())
        {
            cout << total << '\n';
        }
        else
        {
            cout << "0\n";
            while(!s.empty()) s.pop();
        }
    }

    return 0;
}
