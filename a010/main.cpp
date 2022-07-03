#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;
    int total = 0;
    int count_time = 0;
    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            while(num % i == 0)
            {
                total += 1;
                num /= i;
            }
            count_time += 1;
            if(total == 1)
            {
                if(count_time == 1)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << "* " << i << " ";
                }
            }
            else
            {
                if(count_time == 1)
                {
                    cout << i << "^" << total << " ";
                }
                else
                {
                    cout << "* " << i << "^" << total << " ";
                }
            }
            total = 0;
        }
    }

    return 0;
}
