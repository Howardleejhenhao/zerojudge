#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    cin >> n;
    deque<ll> d;
    while(n--)
    {
        int in;
        cin >> in;
        d.push_back(in);
    }
    sort(d.begin(), d.end());
    ll ans = 0;
    vector<ll> v;
    while(!d.empty())
    {
        ans += d.front();
        v.push_back(ans);
        d.pop_front();
    }
    ll sum = 0;
    for(auto it = v.begin() + 1; it != v.end(); it++)
    {
        sum += *it;
    }
    cout << sum<< '\n';
    return 0;
}
