#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int n;
    cin >> n;
    int a = 4;
    int run = 4;
    int i = 1;
    while(1)
    {
        if(n <= a)
        {
            break;
        }
        run += 4;
        a += run;
        i++;
    }
    if(n - (a - run) <= i) cout << "Pen\n";
    else if(n - (a - run) <= 2 * i) cout << "Pineapple\n";
    else if(n - (a - run) <= 3 * i) cout << "Apple\n";
    else cout << "Pineapple pen\n";
    return 0;
}
