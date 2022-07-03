#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    while(cin >> n)
    {
        deque<int> d;
        for(int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            d.push_back(in);
        }
        while(!d.empty())
        {
            for(auto &i:d)cout << i << ' ';
            d.pop_front();
            reverse(d.begin(), d.end());
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}
