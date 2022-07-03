#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long num;
    cin >> num;
    while(num != 0)
    {
        long long num_list[20];
        long long lcm = 1;
        for(int i = 0; i < num; i++)
        {
            cin >> num_list[i];
        }
        for(int i = 0; i < num; i++)
        {
            lcm = (lcm * num_list[i]) / __gcd(lcm, num_list[i]);
        }

        cout << lcm << endl;
        cin >> num;
    }
    return 0;
}
