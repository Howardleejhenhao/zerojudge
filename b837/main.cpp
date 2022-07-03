#include <iostream>
#define ll long long
using namespace std;

ll f[50] = {0, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i = 2;
    while(f[i] <= 1000000)
    {
        f[i] = f[i - 1] + f[i - 2];
        i++;
    }

    int num;
    cin >> num;
    ll a, b;
    int count_num;
    while(num--)
    {
        //cout << "YYY" << endl;
        cin >> a >> b;
        i = 0, count_num = 0;
        if(b > a)swap(a, b);
        while(f[i] <= a)
        {
            //cout << "Y" << endl;
            if(f[i] >= b)
            {
                count_num++;
                cout << f[i] << "\n";
            }
            i++;
        }
        cout << count_num << "\n";
        if(num != 0)cout << "------\n";
    }


    return 0;
}
