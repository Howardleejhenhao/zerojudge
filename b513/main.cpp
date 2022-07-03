#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int flag = 1;

        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        flag? cout <<  "Y\n" : cout << "N\n";
    }
    return 0;
}
