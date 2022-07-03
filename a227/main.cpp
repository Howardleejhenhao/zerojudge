#include <bits/stdc++.h>

using namespace std;

void h(int n, char from, char to, char m)
{
    if(n == 1)
    {
        cout << "Move ring " << n << " from " << from << " to " << to << "\n";
        return;
    }
    h(n - 1, from, m, to);
    cout << "Move ring " << n << " from " << from << " to " << to << "\n";
    h(n - 1, m, to, from);
}

int main()
{
    int num;
    while(cin >> num)
    {
        h(num, 'A', 'C', 'B');
        cout << "\n";

    }
    return 0;
}
