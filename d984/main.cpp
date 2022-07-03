#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c;
    while(cin >> a >> b >> c)
    {
        if(a > b)
        {
            if(a > c)
            {
                if(c > b)
                {
                    c += b;
                }
                else
                {
                    b += c;
                }
            }
            else
            {
                a += b;
            }
        }
        else
        {
            if(b > c)
            {
                if(a > c)
                {
                    a += c;
                }
                else
                {
                    c += a;
                }
            }
            else
            {
                b += a;
            }
        }


        if(a > b)
        {
            if(a > c)
            {
                cout << "A" << endl;
            }
            else
            {
                cout << "C" << endl;
            }
        }
        else
        {
            if(b > c)
            {
                cout << "B" << endl;
            }
            else
            {
                cout << "C" << endl;
            }
        }
    }
    return 0;
}
