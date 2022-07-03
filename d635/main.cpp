#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    int n_list[100000];
    while(cin >> n)
    {
        if(n < 0)
        {
            break;
        }
        int a = 0;
        memset(n_list, 0, sizeof(n_list));
        if(n != 0)
        {
            while(n > 0)
            {
                n_list[a] = n % 8;
                n /= 8;
                a++;
            }
            for(int i = a - 1; i >= 0; i--)
            {
                cout << n_list[i];
            }
            cout << '\n';
        }
        else
        {
            cout << "0\n";
        }
    }
    cout << "-1\n";


    return 0;
}
