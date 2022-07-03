#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    cout << (num / 12) * 50 + (num % 12) * 5 << endl;
    return 0;
}
