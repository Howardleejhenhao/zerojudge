#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    string s;
    ss sss;
    while(cin >> s)
    {
        if(s[0] == 1) cout << "1.00\n";
        else if(s[0] == '-' && s[1] == 1) cout << "-1.00\n";
        else if(s[0] == '-')
        {
            string ns = s.substr(3, s.length());
            if(ns.length() < 2)
            {
                cout << "-0." << ns << "0\n";
            }
            else
            {
                if(ns[2] > '4')
                {
                    if(ns[1] == '9')
                    {
                        if(ns[0] == '9')
                        {
                            cout << "-1.00\n";
                            continue;
                        }
                        else
                        {
                            cout << "-0." << ns[0] + 1 << "0\n";
                        }
                    }
                    else
                    {
                        cout << "-0." << ns[0] << ns[1] + 1 << '\n';
                    }
                }
                else
                {
                    cout << "-0." << ns[0] << ns[1] << '\n';
                }
            }
        }
        else
        {
            string ns = s.substr(2, s.length());
            if(ns.length() < 2)
            {
                cout << "-0." << ns << "0\n";
            }
            else
            {
                if(ns[2] > '4')
                {
                    if(ns[1] == '9')
                    {
                        if(ns[0] == '9')
                        {
                            cout << "1.00\n";
                            continue;
                        }
                        else
                        {
                            cout << "0." << ns[0] + 1 << "0\n";
                        }
                    }
                    else
                    {
                        cout << "0." << ns[0] << ns[1] + 1 << '\n';
                    }
                }
                else
                {
                    cout << "0." << ns[0] << ns[1] << '\n';
                }
            }
        }
    }
    return 0;
}
