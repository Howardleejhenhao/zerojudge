#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int w, n;
    cin >> w >> n;
    deque<int> v;
    int in;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    int now = 0;
    int ans = 0;
    while(!v.empty() && (int)v.size() > 1)
    {
        if(v.front() + v.back() <= w)
        {
            ans++;
            v.pop_back();
            v.pop_front();
            continue;
        }
        ans++;
        v.pop_back();
    }
    cout << ans + (int)v.size() << '\n';
    return 0;
}
