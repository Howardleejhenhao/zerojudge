#include <iostream>

using namespace std;

int f(int num)
{
    if(num == 1) return 1;
    else return f(num - 1) + (num - 1);
}

int main()
{
    int num;
    while(cin >> num)
    {
        cout << f(num) << "\n";
    }
    return 0;
}
