#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, m, xmax=0, xmin=0;
    cin>>a>>b>>c>>d>>e>>f;
    for (int i=1;i<=c;i++){
        if (c%i==0 && f%i==0 && i>xmax){
            xmax=i;
        }
    }
    xmin=c*f/xmax;
    h=(a*xmin+b*xmin/c)+(d*xmin+e*xmin/f);
    g=h/xmin;
    if (h%xmin==0){
        cout<<g;
    }
    else {
        int gg = 1;
        for(int i = 1; i <= (h % xmin); i++) {
            if((h % xmin) % i == 0 && xmin % i == 0) {
                gg = i;
            }
        }
        int ans1 = (h%xmin) / gg;
        int ans2 = xmin / gg;
        cout<<g<<" "<<ans1<<" "<<ans2;
    }
}
