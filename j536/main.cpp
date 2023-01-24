#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    pair<int, int> big = {-1, -INF};
    int all = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        all += v[i];
        if(v[i] > big.second) {
            big = {i, v[i]};
        }
    }
    a /= 2;
    int ans = v[big.first];
    int down = 0;
    int up = 0;
    if(big.first - a >= 0) {
        down = big.first - a;
    }
    else {
        down = 0;
        up += a - big.first;
    }
    if(up + big.first + a < n) {
        up = up + big.first + a;
    }
    else {

        if(down - (up + big.first + a - (n - 1)) >= 0) {
            down = down - (up + big.first + a - (n - 1));
        }
        else {
            down = 0;
        }
        up = n - 1;
    }
    for(int i = big.first - 1; i >= down; i--) {
        ans += v[i];
    }
    for(int i = big.first + 1; i <= up; i++) {
        ans += v[i];
    }
    cout << ans << ' ' << all - ans << '\n';
    return 0;
}
