#include <iostream>

using namespace std;

int n(int x)
{
    if(x == 1)return 1;
    return n(x - 1) + x * x - x + 1;
}

int main()
{
    int s;

    cin >> s;
    cout << n(s) << '\n';
    return 0;
}
