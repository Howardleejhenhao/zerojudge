#include <iostream>

using namespace std;

int f(int a)
{
    if(a < 10)
    {
        return a;
    }
    else
    {
        int total = 0;
        while(a > 0)
        {
            total += a % 10;
            a /= 10;
        }
        return f(total);
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        cout << f(n) << '\n';
    }
    return 0;
}
