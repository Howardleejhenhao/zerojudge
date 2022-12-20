#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int n[3];
        cin >> n[0] >> n[1] >> n[2];
        sort(n, n + 3);
        cout << n[1] << '\n';
    }
}
