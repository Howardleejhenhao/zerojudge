#include <iostream>

using namespace std;

int main()
{
    int a, b, gcd;
    gcd = 1;
    cin >> a >> b;

    if(a > b)
    {
        for(int i = 1; i < b; i++)
        {
            if(a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
    }
    else
    {
        for(int i = 1; i < a; i++)
        {
            if(b % i == 0 && a % i == 0)
            {
                gcd = i;
            }
        }
    }

    cout << gcd << endl;
    return 0;
}
