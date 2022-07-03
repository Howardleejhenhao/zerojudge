#include <iostream>

using namespace std;

int main()
{
    int a, b, total;
    total = 0;
    cin >> a >> b;
    if(a == b)
    {
        if(a == 0)
        {
            total = 0;
        }
        else if(a % 2 == 0)
        {
            total = 1;
        }
    }
    else
    {
        if(a == 0)
        {
            if(b == 0)
            {
                total = 0;
            }
            else
            {
                total = (b - a) / 2;
            }
        }
        else
        {
            if(a % 2 == 0)
            {
                if(b % 2 == 0)
                {
                    total = (b - a) / 2;
                    total += 1;
                }
                else
                {
                    total = (b - a) / 2;
                    total += 1;
                }
            }
            else
            {
                if(b % 2 == 0)
                {
                    total = (b - a) / 2;
                    total += 1;
                }
                else
                {
                    total = (b - a) / 2;
                }
            }

        }
    }
    cout << total << endl;
    return 0;
}
