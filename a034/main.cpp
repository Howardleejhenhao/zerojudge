#include <iostream>

using namespace std;

int main()
{
    int num;

    while(cin >> num)
    {
        int num_list[10000];
        int i = 0;
        while(1)
        {
            if(num == 0 || num == 1)
            {
                num_list[i] = num;
                break;
            }
            else
            {
                num_list[i] = num % 2;
                num /= 2;
            }
            i++;
        }
        for(int k = i; k > -1; k--)
        {
            cout << num_list[k];
        }
        cout << endl;
    }
    return 0;
}
