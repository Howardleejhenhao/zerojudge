#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "請輸入三個數字:";
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
    cout << "最大值為:" << ma << '\n';
    cout << "最小值為:" << mi << '\n';
    return 0;
}
