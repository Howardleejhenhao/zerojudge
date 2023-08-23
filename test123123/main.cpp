#include <bits/stdc++.h>
#define ll long long

using namespace std;
#include <bits/extc++.h>
using namespace __gnu_pbds;
tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> s;


void solve() {
    s.insert(10);

    s.insert(10);

    s.insert(10);

    s.insert(10);

    cout << s.size() << '\n';

    s.erase(s.lower_bound(10));
    cout << s.size() << '\n';

    s.erase(s.lower_bound(10));
        cout << s.size() << '\n';

    s.erase(s.lower_bound(10));
    cout << s.size() << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
