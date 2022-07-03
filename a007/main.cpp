#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    bool m[46342];
    memset(m, 0, sizeof(m));

    vector<int> v;
    for(int i = 2; i < 46342; i++)
    {

        if(!m[i])
        {
            v.push_back(i);
            //cout << i * i << endl;
            for(int j = i * i; j < 46342; j += i)
            {
                //cout << j << endl;
                m[j] = true;
            }
            //cout << "A" << endl;
        }
    }
    int n;
    while(cin >> n)
    {
        if(n > 46341)
        {
            bool flag = 1;
            for(auto i:v)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    cout << "獶借计\n";
                    break;
                }
            }
            if(flag) cout << "借计\n";
        }
        else
        {
            if(m[n]) cout << "獶借计\n";
            else cout << "借计\n";
        }
    }
    return 0;
}
