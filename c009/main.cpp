#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    string s;
    stringstream ss;
    while(1)
    {
        cin >> s;
        if(s == "-1") break;
        if(s[0]=='0')
        {
            string s2;
            int d;
            for(int i=2;i<s.length();i++) s2+=s[i];
            ss<<s2;
            ss>>hex>>d;
            cout<<dec<<d<< '\n';
        }
        else
        {
            ss << s;
            int n;
            ss >> n;
            cout << "0x" << setiosflags(ios::uppercase) << hex << n << '\n';
        }
        ss.clear();
    }
    return 0;
}
