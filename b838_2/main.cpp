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
            // �ѥ���k�̧Ǳ��y�@���r��Ҧ��r��
            for(int i=0; i<len; i++) {
                if(line[i]=='(')
                    L++;
                else
                    R++;
                if(R>L) {              // �u�n�@�o�{ ) �ƶq�h�� (�A
                    isValid = false;   // �w�O���~�t��
                    break;             // ) ���� ( �X�{
                }
            }
            if(isValid && (L==R))     // ( �ƶq �������� ) �ƶq
                cout << L << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
