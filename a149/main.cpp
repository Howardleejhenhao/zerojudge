#include <iostream>

using namespace std;

int main(){
    int N,A;
    string num;

    while(cin >> N){
        for(int i=0;i<N;i++){
        A = 1;
        cin >> num;
        for(int i=0;i<num.length();i++){
            A = A*(num[i]-48);
        }
        cout << A << endl;
        }
    }
}
