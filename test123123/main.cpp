#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int mp[n][m];
    int xx, yy;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mp[i][j];
            if(mp[i][j] == 1) {
                yy = i;
                xx = j;
            }
        }
    }
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'L') xx--;
        else if(s[i] == 'R') xx++;
        else if(s[i] == 'U') yy--;
        else yy++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(yy == i && xx == j) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
