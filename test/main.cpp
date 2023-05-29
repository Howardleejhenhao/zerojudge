#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int m[n + 1];
    for(int i = 1; i <= n; i++) cin >> m[i];
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for(int j = a; j <= b; j++) {
            ans += m[j];
        }
        cout << ans << '\n';
    }
    return 0;

}
