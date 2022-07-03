#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        double a, b, c;

        cin >> a >> b >> c;
        if(a == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            double ans = b * b - 4 * a * c;
            int flag = 0;
            if(ans < 0)
            {
                cout << "No" << endl;
            }
            else if(ans == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                for(int j = 1; j < ans / 2 + 1; j++)
                {
                    if(j * j == ans)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }

            }
        }
    }

    return 0;
}
