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
    int wh;
    cin >> wh;
    auto *it = s.begin() + wh;
    cout << it << '\n';
    return 0;
}
