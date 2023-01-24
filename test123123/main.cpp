#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(6);
    for(int i = 0; i < v.size(); i++) {
        v[i] = i + 1;
    }
    int cnt = 0;
    do{
        cnt++;
        cnt %= 1000000007;
    } while(next_permutation(v.begin(), v.end()));
}
