#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    int G=0;
    int N;
    while(cin >> N && N)
    {
        G = 0;
        for(int i=1;i<N;i++)
        {
            for(int j=i+1;j<=N;j++)

            {
                G+=__gcd(i,j);

            }
        }
        cout << G << '\n';
    }
    return 0;
}
