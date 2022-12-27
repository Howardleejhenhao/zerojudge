#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, n, total, b;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        total=0;
        for (int j=0;j<a;j++){
            cin>>b;
            total=total+b;
        }
        cout<<fixed<<setprecision(2)<<total/a<<" \n";
    }
}
