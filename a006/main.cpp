#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int h;
    h = (b * b) - (4 * a * c);
    if(h > 0)
    {
        cout << "Two different roots " << "x1=" << (- b + sqrt(h)) / (2 * a) << " , x2=" << (- b - sqrt(h)) / (2 * a) << endl;
    }
    else if(h == 0)
    {
        cout << "Two same roots x=" << -b / (2 * a);
    }
    else
    {
        cout << "No real root";
    }

    return 0;
}
