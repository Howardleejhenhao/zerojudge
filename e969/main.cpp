#include <iostream>

using namespace std;

int main()
{
    int n, m, k;

    cin >> n >> m >> k;
    int flag;
    if(k)
    {
        flag = 0;//¥É¦Ì
        if(n < 55)
        {
            cout << "Wayne can't eat and drink.\n";
            return 0;
        }
    }
    else
    {
        flag = 1;//Ä«ªG
        if(n < 32)
        {
            cout << "Wayne can't eat and drink.\n";
            return 0;
        }
    }
    int time = 0;
    while(true)
    {
        if(!flag)
        {
            if(n > 55)
            {
                n -= 55;
                flag = 1 - flag;
                if(n == 1)
                {
                    cout << time << ": Wayne drinks a Corn soup, and now he has " << n << " dollar.\n";
                    continue;
                }
                cout << time << ": Wayne drinks a Corn soup, and now he has " << n << " dollars.\n";
            }
            else if(n - 55 == 0)
            {
                n -= 55;
                cout << time << ": Wayne drinks a Corn soup, and now he doesn't have money.\n";
                break;
            }
            else
            {
                break;
            }
        }
        else
        {
            if(n > 32)
            {
                n -= 32;
                flag = 1 - flag;
                if(n == 1)
                {
                    cout << time << ": Wayne eats an Apple pie, and now he has " << n << " dollar.\n";
                    continue;
                }
                cout << time << ": Wayne eats an Apple pie, and now he has " << n << " dollars.\n";
            }
            else if(n - 32 == 0)
            {
                n -= 32;
                cout << time << ": Wayne eats an Apple pie, and now he doesn't have money.\n";
                break;
            }
            else
            {
                break;
            }
        }
        time += m;
    }
    return 0;
}
