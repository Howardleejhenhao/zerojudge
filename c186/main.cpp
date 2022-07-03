#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    stringstream ss;
    getline(cin, s);
    ss << s;
    string a;
    while(ss >> a) cout << a << '\n';
    return 0;
}
