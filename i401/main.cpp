#include <bits/stdc++.h>
using namespace std;
const int N = 60010;
const int G = 30005;
vector<pair<int, int>> x1[N], x2[N], y1[N], y2[N];
int main()
{
    int n;
    cin >> n;
    while(n--) {
        int x, y, t;
        cin >> x >> y >> t;
        x1[x].push_back({y, t});
        x2[x].push_back({-y, t});
        y1[x].push_back({x, t});
        y2[x].push_back({-x, t});
    }
    pair<int, int> now{0, 0};
    int now = 1;
    while(1) {
        if(now == 1) {
            auto it = lower_bound({})
        }
        else if(now == 2) {

        }
        else if(now == 3) {

        }
        else {

        }
    }
    return 0;
}

