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
            // 由左到右依序掃描一次字串所有字元
            for(int i=0; i<len; i++) {
                if(line[i]=='(')
                    L++;
                else
                    R++;
                if(R>L) {              // 只要一發現 ) 數量多於 (，
                    isValid = false;   // 定是錯誤配對
                    break;             // ) 先於 ( 出現
                }
            }
            if(isValid && (L==R))     // ( 數量 必須等於 ) 數量
                cout << L << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
