#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "�п�J�T�ӼƦr:";
    cin >> a >> b >> c;
    int ma, mi;
    if(a > b && a > c) {
        ma = a;
    }
    else if(b > a && b > c) {
        ma = b;
    }
    else {
        ma = c;
    }
    if(a < b && a < c) {
        mi = a;
    }
    else if(b < a && b < c) {
        mi = b;
    }
    else {
        mi = c;
    }
    cout << "�̤j�Ȭ�:" << ma << '\n';
    cout << "�̤p�Ȭ�:" << mi << '\n';
    return 0;
}
