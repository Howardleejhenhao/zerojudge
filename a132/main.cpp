#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while(num != 0)
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
        int total = 0;

        cout << "The parity of ";

        for(int k = i; k > -1; k--)
        {
            cout << num_list[k];
            if(num_list[k] == 1)
            {
                total += 1;
            }
        }
        cout << " is " << total<< " (mod 2)." << endl;
        cin >> num;
    }
    return 0;
}
