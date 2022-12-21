#include<iostream>
using namespace std;

int main(){
    int n, s, m=0;
    //int g=0;
    cin>>n>>s;
    int c_ans[n], ans[n];
    for (int i=0;i<n;i++){
        cin>>c_ans[i];
    }
    cin>>m;
    int grade[m];
    for (int k=0;k<m;k++){
        grade[k] = 0;
        for (int j=0;j<n;j++){
            cin>>ans[j];
            if (c_ans[j]==ans[j]){
                grade[k]=grade[k]+1;
            }
        }
    }
    for (int l=0;l<m;l++){
        cout<<grade[l]*s << endl;
    }
}
