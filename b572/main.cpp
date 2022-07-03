#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h1, m1, h2, m2, num;
    int now, fur;
    while(n--)
    {
        cin >> h1 >> m1 >> h2 >> m2 >> num;
        now = h1 * 60 + m1;
        fur = h2 * 60 + m2;
        if((fur - now) >= num)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
