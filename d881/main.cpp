#include <iostream>

using namespace std;

int main()
{
    int d;
    while(cin >> d)
    {
        int pl = 0;
        int sum = 0;
        int total = 1;
        int ans = 1;
        for(int i = 0; i < 49; i++)
        {
            sum += pl;
            pl += d;
            total += pl;
            ans += total;
            //cout << total << endl;
        }
        cout << ans << '\n';
    }
    return 0;
}
