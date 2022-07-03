#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    int num_list[100];
    int avs;
    int show = 1;
    cin >> num;
    while(num != 0)
    {
        int num_list[num];
        int total = 0;
        int ans = 0;
        int avs = 0;
        for(int i = 0; i < num; i++)
        {
            cin >> num_list[i];
            total += num_list[i];
        }
        avs = total / num;
        for(int i = 0; i < num; i++)
        {
            if(num_list[i] != avs)
            {
                if(num_list[i] - avs > 0)
                {
                    ans += num_list[i] - avs;
                }
                else
                {
                    ans += avs - num_list[i];
                }
            }
        }
        cout << "Set #" << show << endl;
        cout << "The minimum number of moves is " << ans / 2 << "." << endl;
        cout << endl;
        show += 1;
        cin >> num;
    }

    return 0;
}
