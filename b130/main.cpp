#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    set<int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int in;
        cin >> in;
        s.insert(in);
    }
    cout << (int)s.size() << '\n';
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ' ';
    }
    return 0;
}
