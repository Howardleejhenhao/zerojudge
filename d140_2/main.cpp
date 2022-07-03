#include <iostream>

using namespace std;

int main()
{
    string num;
    int ans = 0;

    while(cin >> num)
    {
        ans = 0;

        int a = 0, b = 0, c = 0;
        b = num[num.length() - 2] - 48;
        c = num[num.length() - 1] - 48;

        for(int i = 0; i < num.length() - 3; i++)
        {
            a += num[i] - 48;
            a *= 10;
        }
        a /= 10;
        int ans = a * 100 + b * 10 + c;
        if(ans <= 10000)
        {
            ans *= 0.9;
            ans += 800;
        }
        else if(ans <= 50000)
        {
            ans *= 0.8;
        }
        else
        {
            ans *= 0.6;
        }
        int inter, fl;
        inter = ans / 100;
        fl = ans % 100;
        if(fl < 10)
            printf("$%d.0%d\n", inter, fl);
        else
            printf("$%d.%d\n", inter, fl);


    }


    return 0;
}
