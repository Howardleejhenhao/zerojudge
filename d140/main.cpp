#include <iostream>

using namespace std;

int main()
{
    double num;

    while(cin >> num)
    {
        double ans = 0;
        if(num <= 100)
        {
            ans = num * 0.9;
            ans += 8;
        }
        else if(num <= 500)
        {
            ans = num * 0.8;
        }
        else
        {
            ans = num * 0.6;
        }
        ans = ans * 1000;

        int ans_2 = ans;
        ans_2 -= ans_2 % 10;

        double ans_3 = (double)ans_2 / 1000;

        printf("$%.2f\n", ans_3);
    }
    return 0;
}
