#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}

int main() {
  int t;
  cin >> t;
  vector<pair<ll, ll>> vp;
  while (t--) {
    ll a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    vp.push_back({a, 1});
    vp.push_back({b, -1});
  }
  sort(vp.begin(), vp.end(), cmp);
  /*for(int i = 0; i < (int)vp.size(); i++)
  {
      cout << vp[i].first << ' ' << vp[i].second << endl;
  }*/
  ll start;// = vp[0].first
  ll ans = 0;
  int now = 0;
  int flag = 0;
  for (int i = 0; i < (int)vp.size(); i++) {
    now += vp[i].second;
    if (flag) {
      if (now == 0) {
        ans += vp[i].first - start;
        flag = 0;
      }
    } else {
      if (now == 1) {
        start = vp[i].first;
        flag = 1;
      }
    }
  }
  cout << ans << '\n';

  return 0;
}
