#include <iostream>

using namespace std;

int main()
{
    int num;
    int a;
    int b;
    int c;
    int d;
    cin >> num;
    for(int i = 0; i < num; i ++)
    {
        cin >> a >> b >> c >> d;
        if((b - a) == (c - b))
        {
            cout << a << " " << b << " " << c << " " << d << " " << d + (d - c) << "\n";
        }
        else
        {
            cout << a << " " << b << " " << c << " " << d << " " << d * (d / c) << "\n";
        }
    }

    return 0;
}
