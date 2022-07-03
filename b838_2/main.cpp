#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int j=0; j<n; j++) {
        string line;
        while(cin>>line) {
            int L=0, R=0;
            int len = line.length();
            bool isValid = true;
            // パオㄌ苯磞Ω﹃┮Τじ
            for(int i=0; i<len; i++) {
                if(line[i]=='(')
                    L++;
                else
                    R++;
                if(R>L) {              // 璶祇瞷 ) 计秖 (
                    isValid = false;   // ﹚琌岿粇皌癸
                    break;             // )  ( 瞷
                }
            }
            if(isValid && (L==R))     // ( 计秖 ゲ斗单 ) 计秖
                cout << L << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
