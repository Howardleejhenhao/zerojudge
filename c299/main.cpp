#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num_list[n];
    for(int i = 0; i < n; i++)
    {
        cin >> num_list[i];
    }
    sort(num_list, num_list + n);
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        if(i)
        {
            if(num_list[i] - num_list[i - 1] != 1)
            {
                flag = 0;
                break;
            }
        }
    }
    cout << num_list[0] << ' ' << num_list[n - 1] << ' ';
    if(flag)
    {
        cout << "yes\n";
        return 0;
    }
    cout << "no\n";

    return 0;
}
