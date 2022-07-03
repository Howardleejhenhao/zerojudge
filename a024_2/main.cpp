#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    else
    {
        return gcd(b % a, a);
    }
}


int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2);

    return 0;
}
