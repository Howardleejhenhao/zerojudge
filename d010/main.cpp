#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        int total = 0;

        for(int i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                total += i;
            }
        }
        if(total > num)
        {
            cout << "盈數" << endl;
        }
        else if(num == total)
        {
            cout << "完全數" << endl;
        }
        else
        {
            cout << "虧數" << endl;
        }
    }

    return 0;
}
