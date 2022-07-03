#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    vector<int> v;
    while(cin >> n)
    {
        if(n == -1) break;
        v.push_back(n);
    }
    cin >> n;
    sort(v.begin(), v.end());
    cout << v[(int)v.size() - n] << '\n';
    return 0;
}
