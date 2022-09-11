#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 1; i <= n; i++)
    {
        v[i - 1] = i;
    }
    do
    {
        for(int i : v) cout << i << ' ';
        cout << '\n';
    }
    while(next_permutation(v.begin(), v.end()));
    return 0;
}
