#include <iostream>

using namespace std;

int main()
{
    char c;
    int a, b;


    while(cin >> a >> c >> b)
    {
        if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            double degree;
            double min_t;
            double hour;
            min_t = 6 * b;
            hour = a * 30 + b * 0.5;
            degree = abs(hour - min_t);
            if(degree > 180)
            {
                degree = 360 - degree;
            }

            printf("%.3f\n", degree);

        }
    }

    return 0;
}
