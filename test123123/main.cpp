#include<iostream>
using namespace std;

int n, m, a, b, c, d, e;

int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>m;
        d=100000;
        for (int j=0;j<m;j++){
            cin>>a>>b;
            c=a*60+b;
            e=e+c;
            if (c<d){
                d=c;
            }
        }
    cout<<"Track "<<i+1<<":\n";
    cout<<"Best Lap: "<<d/60<<" minute(s) "<<d%60<<" second(s).\n";
    cout<<"Average: "<<(e/m)/60<<" minute(s) "<<(e/m)%60<<" second(s).\n";
    }
}
