#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int ans = 0;
    int plse = 0;
    int first = 0;
    int second = 0;

    while(cin >> a)
    {
        if(a > 2)
        {
            ans = 2;
            first = 1;
            second = 2;
            for(int i = 2; i < a; i++)
            {
                ans = first + second;
                first = second;
                second = ans;
            }
                cout << ans << endl;
        }
        else if(a == 2)
        {

            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;

        }
    }

    return 0;
}
